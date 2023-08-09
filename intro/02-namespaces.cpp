#include<iostream>

using namespace std;

double square(double x) {
    return x*x; // Return double (default and better than float) 
}

void print_square(double x) {
    cout << "The square of " << x << " is " << square(x) << "\n";
} 

int main(){
   print_square(1.234); // void function for cout
}