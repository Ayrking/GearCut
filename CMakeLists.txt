cmake_minimum_required(VERSION 2.6)
project(GearCut)

set(CMAKE_CXX_STANDARD 11)

include_directories(io)

add_executable(gear-cut
        main.cpp
        io/command.h io/command.cpp)