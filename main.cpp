/*Author Charles Yingling*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int income;
  double incometax;
  
  int i = 0;
  while (i < 10) {
  cout << "Input income\n";
  cin >> income;
    if (income <= 0) {
    continue;
    i++;
    } else if (income <= 20000.00) {
    incometax = (income - 20000.00);
    cout << "Your incometax is " << incometax << ".\n";
    i++;
  } else if (income >= 20000.01 && income <= 40000.00) {
      incometax = ((income-20000) * 0.10) + 20000*0;
    cout << "Your incometax is " << incometax << ".\n";
    i++;
  } else if (income >= 40000.01 && income <= 60000.01) {
      incometax = ((income-40000)*0.2) + 20000 * 0 + 20000 * 0.1;
    cout << "Your incometax is " << incometax << ".\n";
    i++;
  } else if (income > 60000.01) {
    incometax = ((income-60000)*0.30) + 20000 * 0 + 20000 * 0.1 + 20000 * 0.2;
    cout << "Your incometax is " << incometax << ".\n";
    i++;
    }
  }
}