#include<iostream>
using namespace std;

union Employee
{
  int employeeId; //4 bytes
  double salary; //8 bytes
};

int main()
{
  Employee emp;
  //Memory of largest data type inside the union is allocated at a time
  emp.employeeId=100;
  cout<<"\nThe employeeId is ::"<<emp.employeeId<<" and the salary is ::"<<emp.salary;
  emp.salary=20000.0;
  cout<<"\nThe employeeId is ::"<<emp.employeeId<<" and the salary is ::"<<emp.salary<<"\n";
  return 0;
}
