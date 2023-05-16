cmake_minimum_required(VERSION 3.25)
project(todolistproject)

set(CMAKE_CXX_STANDARD 17)

add_executable(todolistproject main.cpp strtonum.h strtonum.cpp edit.h edit.cpp print.h print.cpp sort.h sort.cpp start.h start.cpp)
