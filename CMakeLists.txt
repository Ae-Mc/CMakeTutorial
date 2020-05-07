cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

# Disable in-source builds to prevent source tree corruption
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "FATAL: in-source builds are not allowed.
        You should create a separate directory for build files.")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")
set(SOURCES main.cpp
            lib/math/operations.cpp)


add_executable(CMakeHello ${SOURCES})
