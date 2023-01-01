#include <iostream>
using namespace std;


void add ( int number1, int number2 );
void multiply ( int number1, int number2 );
void subtract ( int number1, int number2 );
main()
{
  int number1;
  int number2;
  cout << "Enter num 1 :"<<endl;
  cin >> number1;
  cout << "Enter num2 :"<<endl;
  cin >> number2;
  add( number1, number2);

  cin >> number1;
  cin >> number2;
 multiply (number1, number2);

  cin >> number1;
  cin >> number2;
 subtract (number1, number2);  
}

void add( int number1, int number2)
{
  int sum;
  sum = number1 + number2;
  cout << " This is sum :" << sum << endl;
}
void multiply ( int number1, int number2 )
{
  int product;
  product = number1 * number2;
  cout << " This is product :" << product << endl;
}
  void subtract ( int number1, int number2 )
{
  int subtract;
  subtract = number1 - number2;
  cout << " This is subtract :" << subtract << endl;
}