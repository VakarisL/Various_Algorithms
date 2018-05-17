#ifndef GRAPH_H_
#define GRAPH_H_

#include <unordered_map>
#include <vector>
#include <limits>
#include <algorithm>
#include <iostream>

using std::unordered_map;
using std::vector;
using std::endl;
using std::cout;
using std::numeric_limits;

class Graph {
  private:
	unordered_map<char, const unordered_map<char, int>> vertices;
  public:
	void add_vertex(char name, const unordered_map<char, int>& edges) {
		vertices.insert(unordered_map<char, const unordered_map<char, int>>::value_type(name, edges));
	}

	vector<char> shortest_path(char start, char finish) {
		unordered_map<char, int> distances;
		unordered_map<char, char> previous;
		vector<char> nodes;
		vector<char> path;

		auto comparator = [&] (char left, char right) { return distances[left] > distances[right]; };

		for (auto& vertex : vertices) {
			if (vertex.first == start) {
				distances[vertex.first] = 0;
			} else {
				distances[vertex.first] = numeric_limits<int>::max();
			}

			nodes.push_back(vertex.first);
			push_heap(begin(nodes), end(nodes), comparator);
		}
		// for(auto i:nodes){
		// 	std::cout << i <<std::endl;
		// }

		while (!nodes.empty()) {
			pop_heap(begin(nodes), end(nodes), comparator);
			char smallest = nodes.back();
			nodes.pop_back();
			for (auto& neighbor : vertices[smallest]) {
				int alt = distances[smallest] + neighbor.second;
				if (alt < distances[neighbor.first]) {
					distances[neighbor.first] = alt;
					previous[neighbor.first] = smallest;
					make_heap(begin(nodes), end(nodes), comparator);
				}
			}

			if (distances[smallest] == numeric_limits<int>::max()) {
				break;
			}

			std::cout << "Open list: ";
			for ( std::vector<char>::const_iterator i = nodes.begin(); i != nodes.end(); ++i)
				std::cout << *i << ' ';
			std::cout << std::endl;

			if (smallest == finish) {
				while (previous.find(smallest) != end(previous)) {
					path.push_back(smallest);
					smallest = previous[smallest];
					std::cout << "Closed list: ";
					for ( std::vector<char>::const_iterator i = path.begin(); i != path.end(); ++i)
						std::cout << *i << ' ';
					std::cout << std::endl;
				}

				break;
			}

		}

		return path;
	}
};


#endif