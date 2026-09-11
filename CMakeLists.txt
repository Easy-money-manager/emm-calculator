cmake_minimum_required(VERSION 3.20)

project(emm-calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(emm-calculator
	src/main.cpp
)

target_link_libraries(emm-calculator PRIVATE raylib)
