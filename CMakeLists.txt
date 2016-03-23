cmake_minimum_required(VERSION 3.4)
project(OOP_Exam_Complex)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES complex_demo.cpp complex.cpp)
add_executable(OOP_Exam_Complex ${SOURCE_FILES})