cmake_minimum_required(VERSION 3.22)
project(MLP)

set(CMAKE_CXX_STANDARD 14)

set(EIGEN_DIR "/Users/Gassama/pper/bypass_captcha/eigen-3.4.0")

include_directories(${EIGEN_DIR})

add_library(MLP SHARED library.cpp MyMLP.h MyMLP.cpp)
