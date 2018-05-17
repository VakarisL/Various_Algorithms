#include <iostream>
#include <algorithm>

#include "../src/Headers/graph.h"

int main() {
    char start = 'S';
    char finish = 'C';

    Graph g;

    g.add_vertex('S', {{'A', 7}, {'B', 2}});
    g.add_vertex('A', {{'D', 4}, {'B', 3}, {'S', 7}});
    g.add_vertex('B', {{'A', 3}, {'S', 2}, {'H', 1}, {'D', 4}});
    g.add_vertex('C', {{'L', 2}, {'S', 3}});
    g.add_vertex('D', {{'A', 4}, {'B', 4}, {'F', 5}});
    g.add_vertex('E', {{'G', 2}, {'K', 5}});
    g.add_vertex('F', {{'D', 5}, {'H', 3}});
    g.add_vertex('G', {{'E', 2}, {'H', 2}});
    g.add_vertex('H', {{'B', 1}, {'F', 3}, {'G', 2}});
    g.add_vertex('I', {{'L', 4}, {'J', 6}, {'K', 4}});
    g.add_vertex('J', {{'L', 4}, {'I', 6}, {'K', 4}});
    g.add_vertex('K', {{'E', 5}, {'I', 4}, {'J', 4}});
    g.add_vertex('L', {{'C', 2}, {'I', 4}, {'J', 4}});

    cout << "Starting node: " << start << endl;
    cout << "Finish node: " << finish << endl;


    std::vector<char> path = g.shortest_path(start, finish);
    std::reverse(path.begin(), path.end());
    cout << "Solution path from goal sequence : " << start << " ";
    for (char vertex : path) {
        cout <<  vertex << " ";
    }
    std::cout << std::endl;

    return 0;
}