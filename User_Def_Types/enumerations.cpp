#include<iostream>
using namespace std;

enum class Traffic_Light{red,yellow,green};

void trafficMovement(Traffic_Light& t)
{
  if(t==Traffic_Light::red){cout<<"Traffic Stop\n";}
  else if (t==Traffic_Light::yellow){cout<<"Traffic Wait\n";}
  else if (t==Traffic_Light::green){cout<<"Traffic Move\n";}
}

int main()
{
  Traffic_Light t = Traffic_Light::green;
  //traffic movement based on enum Traffic_Light
  trafficMovement(t);
  return 0;
}
