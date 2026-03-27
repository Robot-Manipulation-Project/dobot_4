import sys
import os
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from std_srvs.srv import Trigger
from ament_index_python.packages import get_package_share_directory

# Add the 'resource' directory to sys.path so we can import dobot_client
share_dir = get_package_share_directory('dobot')
resource_dir = os.path.join(share_dir, 'resource')
if resource_dir not in sys.path:
    sys.path.append(resource_dir)

from dobot_client import DobotDriver


class HomingService(Node):

    def __init__(self):
        super().__init__("homing_node")
        self.service = self.create_service(Trigger, "homing", self.service_callback)
        self.dobot = DobotDriver()
        self.get_logger().info("Homing service server is ready.")


    def service_callback(self, request, response):
        try:
            self.get_logger().info("Starting homing procedure...")
            self.dobot.start_homing()
            response.success = True
            response.message = "Homing completed successfully"
            self.get_logger().info("Homing completed.")
        except Exception as e:
            response.success = False
            response.message = f"Homing failed: {str(e)}"
            self.get_logger().error(f"Homing error: {str(e)}")
        return response


def main(args=None):
    try:
        with rclpy.init(args=args):
            node = HomingService()

            rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()