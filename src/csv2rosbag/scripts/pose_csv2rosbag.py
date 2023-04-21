#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import rosbag
from std_msgs.msg import String
import csv
from numpy import double

from ..include.pose import pose_pb2

# open a bag file
bag = rosbag.Bag('../repackage_rosbag/output_rosbag_FILENAME.rosbag', 'w')

with open('../raw_rosbag/zadao_down_output.bag', 'r') as f:
    reader = csv.reader(f)  # read the csv file
    next(reader)  # skip the first line
    for row in reader:
        Pose = pose_pb2.Pose()  # create a Pose message
        Pose.position.x = double(row[25])
        Pose.position.y = double(row[26])
        Pose.position.z = double(row[27])
        Pose.orientation.qx = double(row[])
        Pose.orientation.qy = double(row[])
        Pose.orientation.qz = double(row[])
        Pose.orientation.qw = double(row[])
        Pose.linear_velocity.x = double(row[10])
        Pose.linear_velocity.y = double(row[11])
        Pose.linear_velocity.z = double(row[12])
        Pose.linear_accerlation.x = double(row[13])
        Pose.linear_accerlation.y = double(row[14])
        Pose.linear_accerlation.z = double(row[15])
        Pose.angular_velocity.x = double(row[16])
        Pose.angular_velocity.y = double(row[17])
        Pose.angular_velocity.z = double(row[18])
        Pose.heading = double(row[9])
        Pose.linear_accerlation_vrf.x = double(row[])
        Pose.linear_accerlation_vrf.y = double(row[])
        Pose.linear_accerlation_vrf.z = double(row[])
        Pose.angular_velocity_vrf.x = double(row[])
        Pose.angular_velocity_vrf.y = double(row[])
        Pose.angular_velocity_vrf.z = double(row[])
        Pose.euler_angles.x = double(row[])
        Pose.euler_angles.y = double(row[])
        Pose.euler_angles.z = double(row[])

        serialized_Pose = Pose.SerializeToString()  # serialize the message
        # convert the serialized message to string
        string_data = str(serialized_Pose)
        msg = String()  # create a message
        msg.data = string_data  # assign the string to the message
        # print(string_data)
        print(msg.data)
        # print(msg)
        timestamp_secs = int(row[0][:10])
        timestamp_nsecs = int(row[0][10:])
        ros_time_stamp = rospy.Time(timestamp_secs, timestamp_nsecs)
        bag.write('/apollo/localization/pose', msg, ros_time_stamp)
    bag.flush()  # flush the bag file
    bag.close()
print('Successfully!')
