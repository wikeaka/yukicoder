#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int l, n;
  cin >> l >> n;
  std::vector<int> w(n);
  for (int i = 0; i < n; ++i) {
    cin >> w[i];
  }

  sort(w.begin(), w.end());

  int count = 0, sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += w[i];
    if (sum > l) break;
    ++count;
  }

  cout << count << endl;
  return 0;
}
