#include<iostream>
using namespace std;


int main()
{

  struct Driver
  {
    string name;
    int id;
  };
  struct LinkedTaxi
  {
    int id;
    Driver *drv;
    LinkedTaxi *next;
  };
  Driver d1,d2;
  LinkedTaxi t1,t2;
  d1={"Kalyan",10};
  d2={"Adam",20};
  t1.id=15;
  t1.drv=&d1;
  t1.next=NULL;
  t2.id=25;
  t2.drv=&d2;
  t2.next=&t1;
  cout<<"The details of the next taxi in the queue: "<<(t2.next)->id<<" ,"<<(t2.next)->drv->name<<endl;
  return 0;
}
