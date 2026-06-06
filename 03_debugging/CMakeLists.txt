cmake_minimum_required(VERSION 3.20)

project(03_debugging)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g")

set(SOURCES
    src/main.cpp
)

add_executable(03_debugging ${SOURCES})

target_include_directories(03_debugging PRIVATE include/)
