cmake_minimum_required(VERSION 3.20.0)
project(lecture2 VERSION 0.1.0)

# compilation flags
add_compile_options(-Wall)

add_executable(lecture2 lecture2/src/lecture2.cpp)
set_property(TARGET lecture2 PROPERTY CXX_STANDARD 17)