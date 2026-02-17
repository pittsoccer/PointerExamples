#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int array[] =  {5, 10, 15, 20, 25, 30};

  cout << array << endl;
  for (int count=0; count < 6; count++)
    cout << *(array+count) << " ";

  cout << endl;

  return 0;
}
