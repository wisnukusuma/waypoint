 #include "ros/ros.h"
 #include "geometry_msgs/PointStamped.h"
 #include <std_msgs/String.h>
 #include <vector>
 #include <iostream>
 #include <fstream>
 
std::vector<float> px;
std::vector<float> py;
std::vector<float> pz;
  

void chatterCallback(const geometry_msgs::PointStamped::ConstPtr& msg)
   {
       px.push_back(msg->point.x);
       py.push_back(msg->point.y);
       pz.push_back(msg->point.z);
       ROS_INFO("x = %f, y =%f, z=%f\n",msg->point.x,msg->point.y,msg->point.z);
       std::ofstream myfile("/home/wisnu/catkin_ws/waypoints/waypoint.csv", std::ios::binary);
       for(int i =0; i<px.size();i++){
           myfile<<px[i]<<","<<py[i]<<","<<pz[i]<<std::endl;
       }      
       myfile.close();
   }
 
 
 int main(int argc, char **argv)
   {
      ros::init(argc, argv, "waypoint");
      ros::NodeHandle n;
      ros::Publisher pub =n.advertise<geometry_msgs::Point>("waypoint", 1000);
      ros::Rate loop_rate(0.5);
      ros::Subscriber sub = n.subscribe("/clicked_point", 1000, chatterCallback);
    
      ros::spin();
   
     return 0;
   }
