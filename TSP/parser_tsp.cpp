#include <vector>
#include <set>
#include <fstream>

void parseInput(int &V, int &E, std::vector<std::pair<int, int>> &edges) {
  std::ifstream file("gc_4_1");
  file >> V >> E;

  edges.resize(E);
  for (int i = 0; i < E; i++) {
    file >> edges[i].first >> edges[i].second;
  }

  file.close();
}
