#include<iostream>
using namespace std;

int main()
{
  int a=10;
  int *ptrA;
  int **ptrptrA;
  ptrA=&a;
  ptrptrA=&ptrA;
  cout<<"The value of the variable a is :"<<a<<" and the address of the variable a is :"<<ptrA<<"\n";
  cout<<"The content at the memory address is : "<<*ptrA<<"\n";
  cout<<"The value of the variable ptrptrA is :"<<ptrptrA<<" and the value at the content pointed by ptrptrA is :"<<*ptrptrA<<" and similarly value of content pointed by *ptrptrA is : "<<**ptrptrA<<"\n";
  return 0;
}
