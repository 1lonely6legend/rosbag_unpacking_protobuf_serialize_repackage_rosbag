#!/usr/bin/env python
import rospy
# 导入mgs到pkg中
from std_msgs.msg import String
from localization_pb2 import LocalizationEstimate, LocalizationStatus, Uncertainty
from google.protobuf.descriptor_pool import DescriptorPool

import base64

descriptor_pool = DescriptorPool()


# 回调函数输入的应该是msg
def callback(message):
    #print(message.data)
    message.data.debugstring()
    print(message)

def listener():
    rospy.init_node('pylistener', anonymous=True)
    # Subscriber函数第一个参数是topic的名称，第二个参数是接受的数据类型 第三个参数是回调函数的名称
    rospy.Subscriber('/apollo/localization/pose', String, callback)
    rospy.spin()


if __name__ == '__main__':
    listener()
