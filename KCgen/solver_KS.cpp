#include <vector>
#include <algorithm>

void solveKnapsack(long long N, long long W, const std::vector<long long> &w, const std::vector<long long> &p, std::vector<int> &solution) {
  std::vector<std::vector<long long>> sol(N, std::vector<long long>(W + 1, 0));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if (w[i] <= j) {
        if (i > 0) {
          sol[i][j] = std::max(sol[i - 1][j], sol[i - 1][j - w[i]] + p[i]);
        } else {
          sol[i][j] = p[i];
        }
      } else {
        if (i > 0) {
          sol[i][j] = sol[i - 1][j];
        }
      }
    }
  }

  int i = N - 1, j = W;
  while (sol[i][j]) {
    if (i >= 1) {
      if (sol[i][j] == sol[i - 1][j]) {
        i--;
      } else if (sol[i][j] == p[i] + sol[i - 1][j - w[i]]) {
        solution[i] = 1;
        j -= w[i];
        i--;
      }
    } else {
      break;
    }
  }
}
