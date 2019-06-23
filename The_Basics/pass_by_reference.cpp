#include<iostream>
using namespace std;

int swap(int &a,int &b)
{
  //swap will be made to the actual variables
  cout<<"The values of the values before swap inside function = "<<a<<", "<<b<<"\n";
  int c=a;
  a=b;
  b=c;
  cout<<"The values of the values after swap inside function = "<<a<<", "<<b<<"\n";
}

int main()
{
  int x=10;
  int y=5;
  cout<<"The values of the values before swap = "<<x<<", "<<y<<"\n";
  swap(x,y); //passed by reference
  cout<<"The values of the values after swap = "<<x<<", "<<y<<"\n";
  return 0;
}
