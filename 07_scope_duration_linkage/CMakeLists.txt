cmake_minimum_required(VERSION 3.20)

project(07_scope_duration_linkage)

set(CMAKE_COLOR_DIAGNOSTICS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
)

add_executable(07_scope_duration_linkage ${SOURCES})
target_include_directories(07_scope_duration_linkage PRIVATE include/)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(07_scope_duration_linkage PRIVATE
        -Wall
        -Wextra
        -Wconversion
        -Wshadow
        -fdiagnostics-color=always
    )

    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        target_compile_options(07_scope_duration_linkage PRIVATE
            -fsanitize=address,undefined
        )
        target_link_options(07_scope_duration_linkage PRIVATE
            -fsanitize=address,undefined
        )
    endif()

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(07_scope_duration_linkage PRIVATE
        /W4
    )
endif()
