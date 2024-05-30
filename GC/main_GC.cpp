#include <iostream>
#include <algorithm>
#include "parser.cpp"
#include "solver.cpp"

int main() {
    auto input = parseInputFile("data_GC.txt");
    int V = input.first;
    std::vector<std::pair<int, int>> edges = input.second;

    std::vector<int> color(V, 0);
    solve(V, edges, color);

    std::sort(color.begin(), color.end());
    std::cout << *(color.end() - 1);

    return 0;
}
