#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string A, B;
  cin >> A >> B;

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  cout << (A == B ? "YES" : "NO") << endl;
  return 0;
}
