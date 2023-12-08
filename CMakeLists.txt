cmake_minimum_required(VERSION 3.22.1)
project(cmake_basics)


set(CMAKE_CXX_STANDARD 11)

add_executable(cmake_basics main.cpp main.h 180_rotate.cpp 90_rotate.cpp add.cpp)
