#include<iostream>
using namespace std;

void swapByRef(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  return;
}

int main()
{
  int a=10;
  int b=20;
  cout<<"The values before swap are: "<<a<<" "<<b<<"\n";
  swapByRef(a,b);
  cout<<"The values after swap are: "<<a<<" "<<b<<"\n";
  return 0;

}
