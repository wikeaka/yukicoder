#include <iostream>

using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  int step = 0;
  if (b % a == 0)
    step = b / a;
  else
    step = b / a + 1;

  cout << step << endl;
  return 0;
}
