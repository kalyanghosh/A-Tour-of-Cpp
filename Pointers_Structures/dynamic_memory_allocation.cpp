#include<iostream>
using namespace std;


int * readMarks(int n)
{
  int * marks;
  marks=new int[n];
  if(marks!=NULL)
  {
    for (int i=0;i<n;i++)
    {
      cin>>marks[i];
    }
  }
  return marks;
};

int main()
{
  int *qMarks;
  int numMarks;
  cout<<"Enter the number of marks:\n";
  cin>>numMarks;
  cout<<"The number of marks is:"<<numMarks<<"\n";
  qMarks=readMarks(numMarks);
  if(qMarks==NULL){return -1;}
  int min=qMarks[0];
  int max=qMarks[0];
  for (int i=0;i<numMarks;i++)
  {
    if(qMarks[i]<min){min=qMarks[i];}
    if(qMarks[i]>max){max=qMarks[i];}
  }
  cout<<"The min marks is : "<<min<<" and the max marks is :"<<max<<endl;
  if(qMarks!=NULL)
  {
    delete [] qMarks;
  }
  return 0;
}
