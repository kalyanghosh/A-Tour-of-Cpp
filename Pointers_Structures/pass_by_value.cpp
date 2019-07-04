#include<iostream>
using namespace std;

void swapByValue(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  return;
}

int main()
{
  int a=10;
  int b=20;
  cout<<"The values before swap are: "<<a<<" "<<b<<"\n";
  swapByValue(&a,&b);
  cout<<"The values after swap are: "<<a<<" "<<b<<"\n";
  return 0;

}
