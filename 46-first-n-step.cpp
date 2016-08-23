#include <iostream>

using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int step = 0;
  while (a * step < b) {
    ++step;
  }
  cout << step << endl;
  return 0;
}
