#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N;
  cin >> N;

  int n = ceil(log2(N));

  cout << n << endl;
  return 0;
}
