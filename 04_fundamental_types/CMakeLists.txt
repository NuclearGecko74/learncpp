cmake_minimum_required(VERSION 3.20)

project(04_fundamental_types)

set(CMAKE_COLOR_DIAGNOSTICS ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wconversion -Wshadow -fdiagnostics-color=always")

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,undefined")
endif()

set(SOURCES
    src/main.cpp
)

add_executable(04_fundamental_types ${SOURCES})

target_include_directories(04_fundamental_types PRIVATE include/)
