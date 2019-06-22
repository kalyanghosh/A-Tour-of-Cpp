// User Defined Data Type: Classes

#include<iostream>
using namespace std;

class Vector
{
public:

  Vector(int s): elem{new double[s]},sz{s}{};
  double& operator[](int i){return elem[i];}
  int size(){return sz;}

private:
  double * elem;
  int sz;
};
//method for sum
double read_and_sum(int s)
{
  Vector v(s);

  for (int i=0;i!=v.size();i++)
  {
    cout<<"Enter Number\n";
    cin>>v[i];
  }
  double sum=0;
  for(int i=0;i!=v.size();i++)
  {
    sum+=v[i];
  }
  return sum;
}

//main method
int main()
{
  int size=5; //can be any integer
  int sum=0;
  sum=read_and_sum(size);
  cout<<"The sum of the numbers = "<<sum<<"\n";
  return 0;

}
