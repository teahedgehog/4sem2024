#include <vector>
#include <set>

void solve(int V, const std::vector<std::pair<int, int>>& edges, std::vector<int>& color) {
    color[0] = 1;
    for (int i = 1; i < V; i++) {
        std::set<int> colors;

        for (int j = 0; j < edges.size(); j++) {
            if (edges[j].first == i) {
                colors.insert(color[edges[j].second]);
            } else if (edges[j].second == i) {
                colors.insert(color[edges[j].first]);
            }
        }

        for (int j = 1; j < V + 1; j++) {
            auto search = colors.find(j);
            if (search == colors.end()) {
                color[i] = j;
                break;
            }
        }
    }
}
