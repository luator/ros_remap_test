#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "printmsg");
    ros::NodeHandle nh;
    ros::Duration(1).sleep();

    std::string msg = "bad";
    ros::param::get("~msg", msg);
    ROS_INFO("%s", msg.c_str());

    ros::Duration(1).sleep();

    return 0;
}
