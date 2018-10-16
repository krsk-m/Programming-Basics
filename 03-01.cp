#include <iostream>
using namespace std;
int main()
{
  int x = 30, y = 20;
  cout << x << "," << y << endl;
  
  int z = 10;
  x = y;
  y = x + z;
 
 cout << x << "," << y << endl;

}
