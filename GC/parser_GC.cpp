#include <vector>
#include <set>
#include <iostream>
#include <fstream>

std::pair<int, std::vector<std::pair<int, int>>> parseInputFile(const std::string& filename) {
    std::ifstream file(filename);
    int V, E;
    file >> V >> E;

    std::vector<std::pair<int, int>> edges(E);
    for (int i = 0; i < E; i++) {
        file >> edges[i].first >> edges[i].second;
    }

    return std::make_pair(V, edges);
}
