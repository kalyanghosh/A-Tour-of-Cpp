#include<iostream>
using namespace std;

int add(int x,int y)
{
  return (x+y);
}

int sub(int x,int y)
{
  return (x-y);
}

int mul(int x,int y)
{
  return (x*y);
}


int main()
{
  int x=10;
  int y=5;
  while(true)
  {
    cout<<"Enter your choice:\n";
    char choice;
    cin>>choice;

    switch(choice)
    {
      case 'A':
          cout<<"The sum of the numbers is "<<add(x,y)<<" \n";
          break;

      case 'B':
          cout<<"The sub of the numbers is "<<sub(x,y)<<" \n";
          break;
    }

  }
  return 0;
}
