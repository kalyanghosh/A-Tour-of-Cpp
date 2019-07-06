#include<iostream>
using namespace std;


int main()
{

  struct MyStruct
  {
    char a;
    int x,y;
  };
  MyStruct p1;
  MyStruct *ptr1;
  ptr1=&p1;
  *ptr1={'c',2,3};
  return 0;
}
