#include <iostream>
//two types of Header files
//1.System header files:comes with the compiler
#include <iostream>
//2.User defined header file:written by the user
#include "this.h" //this will produce an error if this.h not included in current directory

using namespace std;
int main()
{
  int a = 4, b = 5;
  cout << "Operators in C++" << endl;
  cout << "Following are the types of operators" << endl;
  //ARITHMETIC OPERATORS
  cout << "\nThe value of a+b is " << a + b;
  cout << "\nThe value of a-b is " << a - b;
  cout << "\nThe value of a*b is " << a * b;
  cout << "\nThe value of a/b is " << a / b;
  cout << "\nThe value of a%b is " << a % b;
  cout << "\nThe value of a++ is " << a++;
  cout << "\nThe value of a-- is " << a--;
  cout << "\nThe value of ++a is " << ++a;
  cout << "\nThe value of --a is " << --a;

  //ASSIGNMENT OPERATOR->used to assign values to operator
  //int a=3, b=9;
  //char d='d';

  //COMPARISON OPERATOR
  cout << "Following are the comparison operators in C++" << endl;
  cout << "The value of a == b is " << (a == b) << endl;
  cout << "The value of a != b is " << (a != b) << endl;
  cout << "The value of a >= b is " << (a >= b) << endl;
  cout << "The value of a <= b is " << (a <= b) << endl;
  cout << "The value of a > b is " << (a > b) << endl;
  cout << "The value of a < b is " << (a < b) << endl;

  // Logical operators
  cout << "Following are the logical operators in C++" << endl;
  cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
  cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
  cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

  return 0;
}
