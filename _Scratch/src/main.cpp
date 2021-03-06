#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void defaultParam(int num1, int num2 = 7, double z = 2.5) {
  int num3;
  num1 = num1 + static_cast<int>(z);
  z = num2 + num1 * z;
  num3 = num2 - num1;
  cout << "num3 = " << num3 << endl;
}

int main() {
  cout << "D:" << '\n';
  defaultParam(1, 2, 3.0);
  cout << "========" << '\n';

  return 0;
}
