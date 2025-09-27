/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n = 6;
  double a;
  double R3, R5, R8, R10, Rn;

  cout << "a = ";
  cin  >> a;

  R3 = (a * sqrt(3)) / 3;
  R5 = a * sqrt(1 / 2 + sqrt(5) / 10);
  R8 = a * sqrt(1 + sqrt(2) / 2);
  R10 = (a / 2) * (1 + sqrt(5));
  Rn = (a) / (2 * sin(M_PI / n));

  cout << "R3 = " << R3  << endl;
  cout << "R5 = " << R5  << endl;
  cout << "R8 = " << R8  << endl;
  cout << "R10 = "<< R10 << endl;

  return 0;
}
