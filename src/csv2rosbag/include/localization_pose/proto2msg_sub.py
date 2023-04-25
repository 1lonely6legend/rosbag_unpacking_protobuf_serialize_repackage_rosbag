#!/usr/bin/env python
import rospy
# 导入mgs到pkg中
from std_msgs.msg import String
from localization_pb2 import LocalizationEstimate, LocalizationStatus, Uncertainty, _b
import pickle

import base64


# 回调函数输入的应该是msg
def callback(message):
    try:
        locationestimate = LocalizationEstimate()
        locationestimate.ParseFromString(base64.decode(message.data))
        print(locationestimate)
    except Exception as e:
        print('Error occurred: ', e)
# try:
#     serialized_data = message.data.SerializeToString()
#     print(serialized_data)
# except Exception as e:
#     print('Error occurred: ', e)

# print(bdata)
# with open('serialized_data', 'wb') as f:
#     pickle.dump(bdata, f)

def listener():
    rospy.init_node('pylistener', anonymous=True)
    # Subscriber函数第一个参数是topic的名称，第二个参数是接受的数据类型 第三个参数是回调函数的名称
    rospy.Subscriber('/apollo/localization/pose', String, callback)
    rospy.spin()


if __name__ == '__main__':
    listener()
