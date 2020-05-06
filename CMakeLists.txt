cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

set(CMAKE_CXX_STANDARD 14)

# UNIX, WIN32, WINRT, CYGWIN, APPLE, ANDROID are environment variables as flags
# set by default system

if(ANDROID)
    message("This is an Android system")
elseif(UNIX)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(WIN32)
    message("This is a Windows system")
endif()

# or use MATCHES to see if actual system site_name
# Darwin is Apple's system name

if(CMAKE_SYSTEM_NAME MATCHES Darwin)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(CMAKE_SYSTEM_NAME MATCHES Windows)
    message("This is a Windows system")
endif()

message("")

add_executable(CMakeHello main.cpp)
