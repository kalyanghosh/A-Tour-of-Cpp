#include<iostream>
using namespace std;

int *returnPointer(int *ptrB)
{
  int x;
  x=(*ptrB)*(*ptrB);
  *ptrB=x;
  return (ptrB);
}

int main()
{
  int *a,b;
  b=10;
  a=returnPointer(&b);
  cout<<"The value return from the method: "<<*a<<" ""\n";
  return 0;

}
