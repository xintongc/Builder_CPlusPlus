cmake_minimum_required(VERSION 3.6)
project(builder)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Computer.h
        ComputerBuilder.h
        Director.h
        main.cpp
        SuperComputerBuilder.h
        TabletComputerBuilder.h)

add_executable(builder ${SOURCE_FILES})