#include <iostream>
#include <cmath>

using namespace std;
int main() {
  int X, Y, L;
  cin >> X >> Y >> L;

  int c = 0;

  if (Y < 0)
    c += 2;
  else
    c += X == 0 ? 0 : 1;

  c += ceil(abs(X) / static_cast<double>(L));
  c += ceil(abs(Y) / static_cast<double>(L));

  cout << c << endl;
  return 0;
}
