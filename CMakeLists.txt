cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

# or use MATCHES to see if actual system site_name
# Darwin is Apple's system name

if(CMAKE_SYSTEM_NAME MATCHES Darwin)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
    add_definitions(-DCMAKEMACROSAMPLE="Apple MacOS")
elseif(CMAKE_SYSTEM_NAME MATCHES Windows)
    message("This is a Windows system")
    add_definitions(-DCMAKEMACROSAMPLE="Windows")
elseif(CMAKE_SYSTEM_NAME MATCHES Android)
    message("This is an Android system")
    add_definitions(-DCMAKEMACROSAMPLE="Android")
endif()

message("")

add_executable(CMakeHello main.cpp)
