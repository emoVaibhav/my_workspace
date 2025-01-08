
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_cpp_interface.msg import SensorData
from std_msgs.msg import String


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(SensorData,'sensor_data',self.listener_callback,10)
        self.subscription
        self.result = self.create_publisher(String,'result',10)
        self.DataVal = None

    def listener_callback(self,msg:SensorData):
        self.get_logger().info('data being read') 
        self.data_val = msg.val
        print("VALUEEEE",self.data_val)
        if self.data_val < 15:
            self.get_logger().info('true')
        else :
            self.get_logger().info('false')

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()