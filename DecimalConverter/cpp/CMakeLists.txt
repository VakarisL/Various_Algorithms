cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(
	Dec
	src/main.cpp
	src/Number.cpp
	src/Conversions.cpp
	src/Headers/Number.h
	src/Headers/Conversions.h
)