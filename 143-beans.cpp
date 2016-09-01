#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int k, n, f;
  cin >> k >> n >> f;

  int beans = k * n;
  for (int i = 0; i < f; ++i) {
    int a;
    cin >> a;
    beans -= a;
  }
  if (beans < 0)
    cout << -1;
  else
    cout << beans;
  cout << endl;
  return 0;
}
