/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  double a = 16.74;
  
  double R3 = (a * sqrt(3)) / 3;
  
  double R5 = a * sqrt(1 / 2 + sqrt(5) / 10);
  
  double R8 = a * sqrt(1 + sqrt(2) / 2);
  
  double R10 = (a / 2) * (1 + sqrt(5));
  
  int n = 6;
  
  double Rn = (a) / (2 * sin(M_PI / n));
  
  cout <<  R3 << endl;
  
  cout <<  R5 << endl;
  
  cout <<  R8 << endl;
  
  cout <<  R10 << endl;
  
  return 0;
}
