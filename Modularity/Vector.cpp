//This is a file with no main(). So while compiling give the command $$ g++ -c Vector.cpp

#include "Vector.h"


using namespace std;

Vector::Vector(int s):elem{new double[s]},sz{s}
{
};
double& Vector::operator[](int i)
{
  return elem[i];
}
int Vector::size()
{
  return sz;
}
