cmake_minimum_required(VERSION 3.21)
project(library)

set(CMAKE_CXX_STANDARD 23)

add_executable(library main.cpp BigNumLib.h BigNumLib.cpp)
