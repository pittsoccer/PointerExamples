#include <iostream>
using namespace std;
int main()
{
  double total;
  int num;
  short test=46;
  char choice;

  cout << "Size of total: " << sizeof(total) << endl;
  cout << "Size of num: " << sizeof(num) << endl;
  cout << "Size of test: " << sizeof(test) << endl;
  cout << "Size of choice: " << sizeof(choice) << endl;
  
  cout << "Value of test: " << test << endl;
  cout << "Address of test: " << &test << endl;

  return 0;
}
