/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  double a;
  double R3, R5, R8, R10, Rn;

  cout << "a = ";
  cin  >> a;
  
  cin >> n;

  R3 = (a * sqrt(3.0)) / 3.0;
  R5 = a * sqrt(1.0 / 2.0 + sqrt(5.0) / 10.0);
  R8 = a * sqrt(1.0 + sqrt(2.0) / 2.0);
  R10 = a / 2.0 * (1.0 + sqrt(5.0));
  Rn = a / (2.0 * sin(M_PI / n));

  cout << "R3 = " << R3 << " R5 = " << R5 << " R8 = " << R8 << " R10 = " << R10 << endl;

  return 0;
}
