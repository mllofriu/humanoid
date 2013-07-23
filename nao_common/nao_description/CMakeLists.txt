cmake_minimum_required(VERSION 2.8.3)
project(nao_description)

find_package(catkin REQUIRED)

catkin_package()

install(FILES
        urdf/nao_robot_v4.urdf.xacro
        urdf/nao_robot_v4_structure.urdf.xacro
        urdf/nao_robot_v3.urdf.xacro
        urdf/nao_robot_v3_structure.urdf.xacro
	urdf/visuals.xacro
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/urdf/
)



