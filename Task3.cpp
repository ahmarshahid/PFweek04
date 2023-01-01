#include <iostream>
using namespace std;
void ifeven(int x);
main()
{
while(true)
 {
  int x;
  cout << "Enter the number :";
  cin >> x;
  ifeven(x);   
 }
}
void ifeven(int x)
{
 if( x%2 == 0 )
 {
  cout << "Even" << endl;
 }
 if( x%2 != 0 )
 {
  cout << "Odd" << endl;
 }
}