cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(
	Digraph
	src/main.cpp
	src/Headers/graph.h
)