#!/usr/bin/env python
"""Simple Hello World node for testing."""
import rospy

if __name__ == "__main__":
    rospy.init_node("printmsg")

    rospy.sleep(2)
    msg = rospy.get_param("~msg", "Bad")
    rospy.loginfo(msg)
    rospy.sleep(2)
