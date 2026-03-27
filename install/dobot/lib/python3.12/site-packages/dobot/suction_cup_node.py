import rclpy
import sys
import os
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from std_srvs.srv import Trigger
from ament_index_python.packages import get_package_share_directory

share_dir = get_package_share_directory('dobot')
resource_dir = os.path.join(share_dir, 'resource')
if resource_dir not in sys.path:
    sys.path.append(resource_dir)

from dobot_client import DobotDriver

class SuctionCup(Node):

    def __init__(self):
        super().__init__("suction_cup_node")
        self.service = self.create_service(Trigger, "suction_cup", self.service_callback)
        self.dobot = DobotDriver()
        self.suction_enabled = False
        self.get_logger().info("Suction cup service server is ready.")

    def service_callback(self, request, response):
        try:
            self.get_logger().info("Toggling suction cup...")
            self.suction_enabled = not self.suction_enabled
            self.dobot.set_suction_cup(self.suction_enabled)
            response.success = True
            response.message = f"Suction cup toggled to {'ON' if self.suction_enabled else 'OFF'} successfully"
            self.get_logger().info(response.message)
        except Exception as e:
            response.success = False
            response.message = f"Error occurred: {str(e)}"
            self.get_logger().error(response.message)
        return response


def main(args=None):
    try:
        with rclpy.init(args=args):
            node = SuctionCup()

            rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()