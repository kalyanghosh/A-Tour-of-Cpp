#include <iostream>
using namespace std;

namespace variables
{
  int a=100;
  int b=200;
}
int add(int &x,int &y)
{
  return (x+y);
}

int main()
{
  int a=75;
  int b=75;
  cout<<"The sum of the variables in global scope = "<<add(a,b)<<"\n";
  cout<<"The sum of the variables in variables namescope = "<<add(variables::a,variables::b)<<"\n";
  return 0;
}
