#include<iostream>
using namespace std;

struct Point
{
  double x,y;
};

struct Disk
{
  Point center;
  double radius;
};


int main()
{

  cout<<"Initializing the Struct Members:\n";
  Point p1={2.0,3.0};
  Disk d1={{4.0,5.0},1.5};
  cout<<"The members of the Point Structure: "<<p1.x<<" ,"<<p1.y<<endl;
  cout<<"The members  of the Disk Structure: "<<d1.center.x<<" ,"<<d1.center.y<<" ,"<<d1.radius<<endl;
  return 0;
}
