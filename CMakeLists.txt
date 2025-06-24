cmake_minimum_required(VERSION 3.31)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp main.cpp
        1-io.cpp
        paiza.cpp
        1-vector.cpp
        1-string.cpp
        1-forauto.cpp
        2-map.cpp)
