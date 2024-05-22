#include <vector>
#include <algorithm>
#include <iostream>

int main() {
  int V, E;
  std::vector<std::pair<int, int>> edges;
  std::vector<int> color;

  parseInput(V, E, edges);
  
  color.resize(V, 0);
  solve(V, E, edges, color);
  
  std::sort(color.begin(), color.end());
  std::cout << *(color.end() - 1);

  return 0;
}
