#ifndef GRID_H_
#define GRID_H_

#include <vector>
// #include <iostream>
#include <string>
#include <unordered_map>

class grid{
private:
	std::unordered_map<std::string, const std::unordered_map<std::string, int>> vertices;
public:
	void add_vertex(std::string name, const std::unordered_map<std::string, int>& edges){
		vertices.insert(std::unordered_map<std::string, const std::unordered_map<std::string, int>>::value_type(name, edges));
	}
	void build_map(std::vector<std::vector<char>> graph){
		// vertices.add_vertex("");
	}
};
#endif