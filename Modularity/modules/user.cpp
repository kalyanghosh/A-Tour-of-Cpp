import Vector;
#include <cmath>
#include <iostream>
using namespace std;

double sqrt_sum(Vector& v)
{
  double sum=0;
  for(int i=0;i!=v.size();++i)
  {
    sum+=sqrt(v[i]);
  }
  return sum;
}

int main()
{
  double sum=0;
  int size=5;
  Vector v(size);
  for (int i=0;i!=v.size();++i)
  {
    cout<<"Enter a number:\n";
    cin>>v[i];
  };
  sum=sqrt_sum(v);
  cout<<"The sum of square roots= "<<sum<<"\n";
  return 0;
}
