#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import rosbag
from std_msgs.msg import String
import csv
from numpy import double

#一.................................................更改为自己的proto文件
from ..include import proto_py_file_name

# open a bag file
start_time = rospy.Time.now()

#二.................................................更改为自己需要输出的rosbag文件名
bag = rosbag.Bag('../repackage_rosbag/output_rosbag_FILENAME.rosbag', 'w')

#三.................................................更改为自己原始rosbag文件名
with open('../raw_rosbag/raw_rosbag_FILENAME.rosbag', 'r') as f:
    reader = csv.reader(f)  # read the csv file
    next(reader)  # skip the first line
    for row in reader:
        # 四.................................更改为自己proto文件中的message名
        Proto_message_NAME = proto_py_file_name.Proto_message_NAME()  # create a Proto_message

        # 五.................................更改为自己proto文件中的message中的field名以及csv文件中的列数
        Proto_message_NAME.field1 = double(row[x])
        Proto_message_NAME.field1 = double(row[x])
        Proto_message_NAME.field1 = double(row[x])
        Proto_message_NAME.field1 = double(row[x])



        # 六...................................更改为自己proto文件中的message名
        serialized_Proto_message_NAME = Proto_message_NAME.SerializeToString()  # serialize the message


        # convert the serialized message to string
        string_data = str(serialized_Proto_message_NAME)
        msg = String()  # create a message
        msg.data = string_data  # assign the string to the message
        # print(string_data)
        print(msg.data)
        # print(msg)

        # 七.................................更改为自己csv文件中的时间戳所在的列数，默认为第一列
        timestamp_secs = int(row[0][:10])
        timestamp_nsecs = int(row[0][10:])
        ros_time_stamp = rospy.Time(timestamp_secs, timestamp_nsecs)

        # 八.................................更改为自己需要输出的rosbag文件中的topic名
        bag.write('/topic_NAME', msg, ros_time_stamp)
    bag.flush()  # flush the bag file
    bag.close()
print('Successfully!')
