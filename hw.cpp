#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Calc{
  public:
    int add(int x, int y){
      return x+y;
    }
};

int main () {
  int x, y;
  cout << "Enter 1st number: ";
  cin >> x;
  cout << "Enter 2nd number: ";
  cin >> y;
  
  Calc calc;
  cout << "Sum: " << calc.add(x, y) << endl;

  return 0;
}
