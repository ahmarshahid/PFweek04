#include <iostream>
using namespace std;
void checkresult(int marks);




main()
{
 int marks;
 while (true)
 {
 cout << " Enter the marks :";
 cin >> marks;
 checkresult(marks);
 }
}


void checkresult(int marks)

{
  
  if ( marks > 50 )

  {
     cout << "PASS" << endl;
  }

   if ( marks < 50 )
  {

     cout << "FAIL" << endl;
  }

   if ( marks == 50 )
  {
     cout << "Workhard" << endl;
  }


}
