cmake_minimum_required(VERSION 3.16)

project(bytearray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC main.cpp)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}   
    LIBRARY DESTINATION ${CMAKE_INSTALL_BINDIR}
)
