#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int array[] =  {5, 10, 15, 20, 25, 30};

  cout << "The value of the first element is: " 
       << *array << endl;

  cout << "The value of the second element is: " 
       << *(array+1) << endl;

  cout << "The value of the fifth element is: " 
       << *(array+4) << endl;

  cout << "The value of the second element is: " 
       << *array+1 << endl;

  return 0;
}
