#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import rosbag
from std_msgs.msg import String
import csv
import Location_pb2

from numpy import double

# initialize a node
rospy.init_node('proto2rosbag', anonymous=True)

# open a bag file
start_time = rospy.Time.now()
bag = rosbag.Bag('../Location_proto_strings.bag', 'w')

with open('/home/ogier/Documents/prototxt2rosbag/zadao_down_output.csv', 'r') as f:
    reader = csv.reader(f)  # read the csv file
    next(reader)  # skip the first line
    for row in reader:
        Location = Location_pb2.Location()
        Location.position.longitude = double(row[4])
        Location.position.latitude = double(row[5])
        Location.position.height = double(row[6])
        Location.pitch = double(row[7])
        Location.roll = double(row[8])
        Location.heading = double(row[9])
        # Location.linear_velocity.x = row[10]
        # Location.linear_velocity.y = row[11]
        # Location.linear_velocity.z = row[12]
        # Location.linear_accerlation.x = row[13]
        # Location.linear_accerlation.y = row[14]
        # Location.linear_accerlation.z = row[15]
        # Location.angular_velocity.x = row[16]
        # Location.angular_velocity.y = row[17]
        # Location.angular_velocity.z = row[18]
        # Location.rtk_flag = row[19]
        # Location.odom_type = row[20]
        # Location.auxiliary_type = row[21]
        # Location.location_valid_flag = row[22]
        # Location.origin_lat = row[23]
        # Location.origin_lon = row[24]
        # Location.utm_poisiton.x = row[25]
        # Location.utm_poisiton.y = row[26]
        # Location.utm_poisiton.z = row[27]
        # Location.change_origin_flag = row[28]

        serialized_Location = Location.SerializeToString()  # serialize the message
        # convert the serialized message to string
        string_data = str(serialized_Location)
        msg = String()  # create a message
        msg.data = string_data  # assign the string to the message
        # print(string_data)
        print(msg.data)
        # print(msg)
        timestamp_secs = int(row[0][:10])
        timestamp_nsecs = int(row[0][10:])
        ros_time_stamp = rospy.Time(timestamp_secs, timestamp_nsecs)
        bag.write('/Location', msg, ros_time_stamp)
    bag.flush()  # flush the bag file
    bag.close()
print('Successfully converted format!')

# Path: src/trans_pb.py
