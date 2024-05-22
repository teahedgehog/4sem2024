#include <iostream>
#include <vector>

int main(int argc, char** argv) {
  char* filename = argv[1];
  long long N, W;
  std::vector<long long> w, p;
  
  parseInput(filename, N, W, w, p);

  std::vector<int> solution(N, 0);
  solveKnapsack(N, W, w, p, solution);

  long long psum = 0, wsum = 0;
  for (int i = 0; i < N; i++) {
    if (solution[i] != 0) {
      psum += p[i];
      wsum += w[i];
    }
  }

  std::cout << "Total value: " << psum << std::endl;
  std::cout << "Remaining weight: " << W - wsum << std::endl;
  
  for (int i = 0; i < N; i++) {
    std::cout << solution[i] << ' ';
  }
  
  std::cout << std::endl;

  return 0;
}
