#include <iostream>

using namespace std;

void some_function();

int main(){
  some_function();
  
  return 0;
}

void some_function(){
  double d = 2.2; // initialized floating-point number
  int i = 7; // initialize integer
  d = d + i; // assign sum to d
  i = d * i; // assign product to i (after truncating decimal point)
  
  cout << "Result of d: " << d << endl;
  cout << "Result of i:" << i << endl;
}
