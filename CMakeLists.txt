cmake_minimum_required(VERSION 2.8.12)

project(demo)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(e2_3_video e2_3_video.cpp)
target_link_libraries(e2_3_video ${OpenCV_LIBS})