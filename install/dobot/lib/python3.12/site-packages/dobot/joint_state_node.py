import rclpy
import sys
import os
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from sensor_msgs.msg import JointState
from ament_index_python.packages import get_package_share_directory

share_dir = get_package_share_directory('dobot')
resource_dir = os.path.join(share_dir, 'resource')
if resource_dir not in sys.path:
    sys.path.append(resource_dir)

from dobot_client import DobotDriver


class JointStateAction(Node):

    def __init__(self):
        super().__init__("joint_state_node")
        self.dobot = None
        self.publisher = self.create_publisher(JointState, "joint_state", 10)
        timer_period = 0.2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "base_link"
        msg.name = ["joint1", "joint2", "joint3", "joint4"]

        try:
            self.dobot=DobotDriver()
            j1, j2, j3, j4 = self.dobot.get_joint_state()  # ✅ unpack tuple
            msg.position = [j1, j2, j3, j4]
            self.publisher.publish(msg)
            self.get_logger().info(f"Publishing: {msg.position}")

        except Exception as e:
            self.dobot=None
            self.get_logger().error(f"Can't connect to dobot: {e}")
            msg.position = [0.0, 0.0, 0.0, 0.0]
            self.publisher.publish(msg)

def main(args=None):
    try:
        with rclpy.init(args=args):
            node = JointStateAction()
            rclpy.spin(node)

    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == "__main__":
    main()