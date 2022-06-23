# ROSWaypointsRecord
Record Waypoints in rviz and saved to .csv file later to use in navigation stack
You can use a simulator like Turtlebot,Turtlebot3, etc in this project I'm using Turtlebot3
1. create directory in your catkin workspace with names "waypoints". cd ~/catkin_ws && mkdir waypoints  
2. clone this repo to your workspace example "~/catkin_ws/src/"
3. change your directory to base workspace then build "catkin_make"
4. when finish, roslaunch turtlebot3_gazebo turtlebot3_world.launch #launch the turtlebot in the gazebo
5. roslaunch turtlebot3_navigation turtlebot3_navigation.launch #run some node like amcl, map, and move_base.
6. rosrun waypoint waypoint 
7. in rviz you can use publish point by add on your toolbar with clicked the +, after that you click the publish point to whenever you want. ![image](https://user-images.githubusercontent.com/33643189/175269796-d903b3ed-b39f-4a2f-94d1-02c635046f16.png)
   

