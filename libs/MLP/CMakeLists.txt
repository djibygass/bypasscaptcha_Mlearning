cmake_minimum_required(VERSION 3.22)
project(MLP)

set(CMAKE_CXX_STANDARD 14)

add_library(MLP SHARED library.cpp MyMLP.h MyMLP.cpp)
