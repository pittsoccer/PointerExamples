#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int array[] =  {5, 10, 15, 20, 25, 30};
  int *ptr;

  ptr = array;
  for (int count=0; count < 6; count++)
   {
    cout << *ptr << " ";
    ptr++;
   }
  cout << endl;

  for (int count=0; count < 6; count++)
   {
    ptr--;
    cout << *ptr << " ";
   }
  cout << endl;

  return 0;
}
