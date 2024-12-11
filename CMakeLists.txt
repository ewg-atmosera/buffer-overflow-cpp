cmake_minimum_required(VERSION 3.27)  # CMake 3.27 or later is required

# set the project name
project(BufferOverflowCpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 23)

# add the executable
add_executable(BufferOverflowCpp src/main.cpp)