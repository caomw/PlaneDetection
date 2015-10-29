cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(plane_detection)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFENITIONS})

file(GLOB SOURCES "src/*.cpp")

add_executable(plane_detection ${SOURCES})
target_link_libraries(plane_detection ${PCL_LIBRARIES})
