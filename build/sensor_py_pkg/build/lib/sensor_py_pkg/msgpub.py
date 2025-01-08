
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_cpp_interface.msg import SensorData
import random


class sensorpublish(Node):

    def __init__(self):
        super().__init__('sensor_publish') 
        self.get_logger().info('PublishingNameValue')
        self.sensor_data= self.create_publisher(SensorData, 'sensor_data', 10) 
        self.timer = self.create_timer(2,self.callback) 
        
    def callback(self):
        data = SensorData()
        data.name = 'lidar'
        data.val = random.randint(0,20)
        self.sensor_data.publish(data) 
        self.get_logger().info('publishing:')


def main(args=None):
    rclpy.init(args=args)
    
   
    minimal_publisher = sensorpublish()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()