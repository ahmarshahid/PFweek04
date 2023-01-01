#include <iostream>
using namespace std;


void add(int number1, int number2);
void multiply(int number1, int number2);
void subtract(int number1, int number2);
void divide(int number1, int number2);

main()
{
  while(true)
  {
   int number1;
   int number2;
   char operation;

   cout << " Enter num 1: ";
   cin >> number1;

   cout << " Enter num2 : ";
   cin >> number2;


   cout << " Enter operator +,-,*,/ : ";
   cin >> operation;

   if ( operation == '+' )
   {
    add(number1, number2);
   }

   if (operation == '*' )
   {
    multiply(number1, number2);
   }

   if (operation == '-' )
   {
    subtract(number1, number2);
   }

   if (operation == '/' )
   {
   divide(number1, number2);
   }
  
  }
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

  void divide ( int number1, int number2 )
{
  float divide;
  divide = number1 / number2;
cout << " This is division :" << divide << endl;
}