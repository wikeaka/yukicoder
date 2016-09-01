#include <iostream>

using namespace std;

int main() {
  int L, K;
  cin >> L >> K;

  int n;
  if (L % (2 * K) ==0)
    n = L / (2 * K) - 1;
  else
    n = L / (2 * K);

  cout << K * n << endl;
  return 0;
}
