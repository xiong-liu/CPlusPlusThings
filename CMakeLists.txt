cmake_minimum_required(VERSION 3.16)
project(CppThings)

set(CMAKE_CXX_STANDARD 14)

include_directories(test)

add_executable(CppThings "test/test.cpp")
