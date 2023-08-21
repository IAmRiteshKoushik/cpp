#include <iostream>

using namespace std;

bool accept(){
 cout << "Do you want to proceed > (y or n)"; 

  char answer = 0;
  cin >> answer;
  
  if (answer == 'y') return true;
  return false;
  
  // True and false values are evaluated as 1 and 0 respectively and not "true" and "false" strings. 
}

bool accept2(){
  cout << "Do you want to proceed > (y or n)";

  char answer = 0;
  cin >> answer;

  // Using switch case statements to handle this requests
  switch (answer){
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      cout << "I will take that for a no.\n";
      return false;
  }
}

bool accept3(){
  int tries = 1;
  while (tries < 4){
    cout << "Do you want to proceed (y or n)\n";
    char answer = 0;
    cin >> answer;

    switch (answer) {
      case 'y':
        return true;
      case 'n':
        return false;
      default:
        cout << "Sorry, I don't understand that\n";
        ++tries;
    }
  }
  cout << "I will take that as a no\n";
  return false;
}

int main(){
  // Printed results are 0 or 1
  // Not true or false
  cout << accept() << endl;
  cout << accept2() << endl; 
  cout << accept3() << endl;
}
