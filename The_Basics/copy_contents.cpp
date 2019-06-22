#include<iostream>
using namespace std;

int count_x(const char * p, char x)
{
  if(p==nullptr)
      return 0;
  int count=0;
  while(*p)
  {
    if(*p==x)
        ++count;
    ++p;
  }
  return count;
}

int main()
{
  char word[]={'H','e','l','l','o','\0'};
  cout<<"The count of character is = "<<count_x(word,'l')<<" \n";
  return 0;
}
