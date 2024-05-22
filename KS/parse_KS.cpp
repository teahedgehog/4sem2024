#include <fstream>
#include <vector>

void parseInput(char* filename, long long &N, long long &W, std::vector<long long> &w, std::vector<long long> &p) {
  std::ifstream fin(filename);
  fin >> N >> W;

  w.resize(N);
  p.resize(N);

  for (int i = 0; i < N; i++) {
    fin >> p[i] >> w[i];
  }

  fin.close();
}
