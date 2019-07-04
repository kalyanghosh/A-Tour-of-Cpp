#include<iostream>
using namespace std;

int main()
{
  int * A;
  cout<<"Enter the number of students:\n";
  int numStudents;
  cin>>numStudents;
  A=new int[numStudents];
  if(A!=NULL)
  {
  A[0]=10;
  A[1]=15;
  }
  return 0;

}
