//
// Created by ogier on 23-4-23.
//
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <src/csv2rosbag/include/localization_pose/localization.pb.h>

void callback(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/apollo/localization/pose", 1000, callback);
    ros::spin();
    return 0;
}