#include <iostream>
using namespace std;
void iseligible(int age);
main()
{
  int age;
  while (true)
   {
    cout << " Enter the age :";
    cin >> age;
    iseligible(age);
   }
}
void iseligible( int age)
{
  if( age < 18 )
  {
    cout << "Not eligible"<< endl;
  }

  if( age > 17 )
  {
    cout << " Eligible " << endl;
  }
}