#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import rosbag

import pickle
from std_msgs.msg import String

# set the rate of the publisher is 100Hz
rate = 100
period = rospy.Duration(1.0 / rate)

# initialize a node
rospy.init_node('proto2rosbag', anonymous=True)

# open a bag file
bag = rosbag.Bag('Location_proto_strings.bag', 'w')

# create a publisher
pub = rospy.Publisher('Location', String, queue_size=10)
# Location is the topic name
# String is the message type
# queue_size=10 means the publisher can store 10 messages in the queue


# use mt data and publish it to the topic
with open('/home/ogier/Documents/prototxt2rosbag/pose_zadao_down.proto.txt', 'r') as f:
    # read the file line by line
    for line in f:
        # initialize a message
        msg = String()
        # set the data of the message
        msg.data = line
        pub.publish(msg)
        bag.write('Location', msg, rospy.Time.now())
        rospy.sleep(period)
bag.close()
