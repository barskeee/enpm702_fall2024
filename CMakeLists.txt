cmake_minimum_required(VERSION 3.20.0)
project(lecture1 VERSION 0.1.0)

add_executable(lecture1 lecture1/src/lecture1.cpp)
set_property(TARGET lecture1 PROPERTY CXX_STANDARD 17)