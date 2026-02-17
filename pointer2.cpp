#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
  int a = 10, b = 30, c = 20;
  int *ptr;

  cout << "The values of a, b, and c are: "
       << a << " " << b << " " << c << endl;

  ptr = &a;
  *ptr += 50;

  ptr = &b;
  *ptr -= 50;

  ptr = &c;
  *ptr *= 50;

  cout << "The values of a, b, and c are: "
       << a << " " << b << " " << c << endl;

  return 0;
}
