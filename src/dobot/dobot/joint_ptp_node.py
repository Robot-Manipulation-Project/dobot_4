# The following imports are necessary
import sys
import os
import threading
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import ExternalShutdownException
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory

# Replace the following import with the interface this node is using
from dobot_interface.action import JointPTP

# Add the 'resource' directory to sys.path so we can import dobot_client
share_dir = get_package_share_directory('dobot')
resource_dir = os.path.join(share_dir, 'resource')
if resource_dir not in sys.path:
    sys.path.append(resource_dir)

from dobot_client import DobotDriver

# You can import here any Python module you plan to use in this node
import time

class JointPTPNode(Node):

    def __init__(self):
        super().__init__("joint_ptp_node")
        self.goal_handle = None
        self.goal_lock = threading.Lock()
        
        self.get_logger().info("Connecting to Dobot...")
        try:
            self.dobot = DobotDriver()
            self.get_logger().info("Connected successfully.")
        except SystemExit:
            self.get_logger().error("Dobot could not be found or connected.")
            self.dobot = None

        # Action servers are created using interface type, action name and multiple callback functions
        self.action_server = ActionServer(
            self,
            JointPTP,
            "set_joint_ptp",
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self.action_server.destroy()
        super().destroy_node()

    # This function is called whenever new goal request is received
    def goal_callback(self, goal_request):
        # Accept or reject a client request to begin an action.
        self.get_logger().info("Received goal request")
        
        # Check if the goal requested is valid before moving the robot arm
        # Assuming valid joint angles are within -180 to 180 degrees (Mock condition)
        if len(goal_request.joint_goal) != 4:
            self.get_logger().warning("Invalid joint goal length!")
            return GoalResponse.REJECT
            
        if self.dobot and not self.dobot.is_goal_valid(*goal_request.joint_goal):
            self.get_logger().warning("Joint goal out of valid bounds!")
            return GoalResponse.REJECT

        return GoalResponse.ACCEPT

    # This function is called whenever new goal has been accepted
    def handle_accepted_callback(self, goal_handle):
        with self.goal_lock:
            # This server only allows one goal at a time
            if self.goal_handle is not None and self.goal_handle.is_active:
                self.get_logger().info("Aborting previous goal")
                # Abort the existing goal
                self.goal_handle.abort()
            self.goal_handle = goal_handle

        goal_handle.execute()

    # This function is called whenever cancel request is received
    def cancel_callback(self, goal):
        # Accept or reject a client request to cancel an action.
        self.get_logger().info("Received cancel request")
        return CancelResponse.ACCEPT

    # This function is called at the start of action execution
    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing goal...")

        goal_angles = goal_handle.request.joint_goal
        
        # Send PTP command to the actual Dobot if available
        if self.dobot:
            self.get_logger().info(f"Sending goal to Dobot: {goal_angles}")
            try:
                self.dobot.set_joint_ptp(goal_angles[0], goal_angles[1], goal_angles[2], goal_angles[3])
            except Exception as e:
                self.get_logger().error(f"Failed to send PTP goal: {str(e)}")
                result = JointPTP.Result()
                result.success = False
                goal_handle.abort()
                return result
        else:
            self.get_logger().warning("Robot not connected. Simulating execution.")
            
        feedback_msg = JointPTP.Feedback()
        
        # Initialize starting position by checking actual joints (or zeros if offline)
        if self.dobot:
            try:
                j1, j2, j3, j4 = self.dobot.get_joint_state()
                feedback_msg.joint_present = [float(j1), float(j2), float(j3), float(j4)]
            except:
                feedback_msg.joint_present = [0.0, 0.0, 0.0, 0.0]
        else:
            feedback_msg.joint_present = [0.0, 0.0, 0.0, 0.0]
            
        previous_joints = list(feedback_msg.joint_present)
        
        # 10Hz feedback rate loop
        loop_rate = 0.1
        
        # Thresholds
        goal_threshold = 0.02
        stuck_threshold = 0.0001
        
        result = JointPTP.Result()

        while rclpy.ok():
            # If goal is flagged as no longer active, stop executing
            if not goal_handle.is_active:
                self.get_logger().info("Goal aborted")
                if self.dobot: self.dobot.stop_current_action()
                result.success = False
                return result

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info("Goal canceled")
                if self.dobot: self.dobot.stop_current_action()
                result.success = False
                return result
                
            # Update current position
            if self.dobot:
                try:
                    j1, j2, j3, j4 = self.dobot.get_joint_state()
                    feedback_msg.joint_present = [float(j1), float(j2), float(j3), float(j4)]
                except:
                    pass
            else:
                # Simulate arm movement towards goal if not connected
                for i in range(4):
                    current_val = feedback_msg.joint_present[i]
                    target_val = goal_angles[i]
                    feedback_msg.joint_present[i] += (target_val - current_val) * 0.1
                
            # 1. Monitor the differences between the joint goal and joint present angles
            goal_diff = [abs(g - p) for g, p in zip(goal_angles, feedback_msg.joint_present)]
            if all(d < goal_threshold for d in goal_diff):
                self.get_logger().info("Goal reached successfully.")
                result.success = True
                goal_handle.succeed()
                return result
                
            # 2. Monitor the differences between present and previous joint angles 
            stuck_diff = [abs(p - prev) for p, prev in zip(feedback_msg.joint_present, previous_joints)]
            if all(d < stuck_threshold for d in stuck_diff):
                self.get_logger().info("Action failed: Arm is stuck.")
                result.success = False
                if self.dobot: self.dobot.stop_current_action()
                goal_handle.abort()
                return result

            self.get_logger().info(f"Publishing feedback: {feedback_msg.joint_present}")
            
            # Publish the feedback
            goal_handle.publish_feedback(feedback_msg)

            # Update previous joints
            previous_joints = list(feedback_msg.joint_present)

            # Sleep to match rate
            time.sleep(loop_rate)


def main(args=None):
    try:
        with rclpy.init(args=args):
            node = JointPTPNode()

            # We use a MultiThreadedExecutor to handle incoming goal requests concurrently
            executor = MultiThreadedExecutor()
            rclpy.spin(node, executor=executor)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()