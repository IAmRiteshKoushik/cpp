// Constants and constant expressions

#include <iostream> 

using namespace std;

int square(int var);

int main(){

  // NEEDS ATTENTION

  const int dmv = 17; // named constant
  int var = 17; // named but not constant
  constexpr double max1 = 1.4 * square(var); // OK if square(17) is a constant expression
  constexpr double max2 = 1.4 * square(var); // error if var is not a constant
  
  const double max3 = 1.4 * square(var); // OK, may be evaluated at run time
}
