cmake_minimum_required(VERSION 3.30)
project(Exe1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Exe1 main.cpp
        graph.cpp
        graph.h)
