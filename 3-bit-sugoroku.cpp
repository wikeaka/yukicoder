#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <limits>
#include <numeric>

using namespace std;


using Edge = pair<int, int>;

int step(const int x) {
  const int BIT_MAX = 14;
  bitset<BIT_MAX> bs(x);
  return bs.count();
}

vector<Edge> makeEdges(const int N) {
  vector<Edge> e;

  for (int i=0; i<N; ++i) {
    int s = step(i+1);
    if (0 <= i-s && i-s < N) e.push_back(Edge(i, i-s));
    if (0 <= i+s && i+s < N) e.push_back(Edge(i, i+s));
  }
  return e;
}

int dijkstra(const vector<Edge> e, const int start, const int goal) {
  vector<float> costs(goal - start + 1, numeric_limits<float>::infinity());
  costs[start] = 0;
  vector<int> t(goal - start + 1);
  iota(t.begin(), t.end(), 0);

  int min_v = start;
  while (min_v != goal) {
    for (auto x : e) {
      if (x.first != min_v) continue;
      if (find(t.begin(), t.end(), x.second) == t.end()) continue;
      if (costs[x.second] > costs[x.first] + 1) costs[x.second] = costs[x.first] + 1;
    }

    t.erase(remove(t.begin(), t.end(), min_v));

    min_v = t[0];
    for (auto x : t) {
      if (costs[min_v] > costs[x]) min_v = x;
    }
  }
  if (costs[goal] == numeric_limits<float>::infinity()) return -1;
  return costs[goal];
}

int main() {
  int N;
  cin >> N;

  const vector<Edge> e = makeEdges(N);
  int answer = dijkstra(e, 0, N-1);
  if (answer < 0)
    cout << -1;
  else
    cout << answer + 1;
  cout << endl;
  return 0;
}
