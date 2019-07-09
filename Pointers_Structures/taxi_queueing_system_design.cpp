/*Use Case: Design a Taxi Aggregation System
  Functionalities:
 1. The system should add a new taxi to the aggregation pool
 2. The system should dispatch a taxi when a request arrives
*/

#include<iostream>
using namespace std;

//The structure definition of the entities involved
struct Driver{string name;int id;};
struct LinkedTaxi{int id;Driver *drv;LinkedTaxi *next;};
struct Queue{LinkedTaxi *front,*end;int numTaxis;};

int main()
{
Queue q;
q.front=NULL;
q.end=NULL;
q.numTaxis=0;

//present options to the user and get input
while(true)
{
  cout<<"Command: 'j' to join the queue, 'd' to dispatch, 'x' to exit. "<<endl;
  char choice;
  cin>>choice;
  switch(choice)
  {
    case 'j':

    Driver *newDrv; newDrv=new Driver;
    if(newDrv==NULL){cout<<"Memory allocation failure."<<endl;return -1;}
    cout<<"Enter the name of the driver:"<<endl;
    cin>>newDrv->name;
    cout<<"Enter the id of the driver:"<<endl;
    cin>>newDrv->id;
    LinkedTaxi *newTaxi;newTaxi = new LinkedTaxi;
    if(newTaxi==NULL){cout<<"Memory allocation failure."<<endl;return -1;}
    newTaxi->drv=newDrv;newTaxi->next=NULL;
    cout<<"Enter the id of the taxi:"<<endl;
    cin>>newTaxi->id;
    if(q.end==NULL){
    q.front=newTaxi;q.end=newTaxi;q.numTaxis=1;
    }
    else
    {
    (q.end)->next=newTaxi;q.end=newTaxi;q.numTaxis++;
    }
    break;

    case 'd':
    if(q.front==NULL)
    {
      cout<<"Sorry! No taxis in the queue at present."<<endl;
    }
    else
    {
      LinkedTaxi *dispatchTaxi;
      dispatchTaxi=q.front;
      if(q.front==q.end){
        q.front=NULL;q.end==NULL;q.numTaxis=0;
      }
      else
      {
        q.front=(q.front)->next;
        q.numTaxis--;
      }
      if(dispatchTaxi!=NULL)
      {
        cout<<"Dispatching Taxi with Id : "<<dispatchTaxi->id<<endl;
        if(dispatchTaxi->drv!=NULL){delete dispatchTaxi->drv;}
        delete dispatchTaxi;
      }
    }

    break;

    case 'x':cout<<"Thank You "<<endl; return 0;
    default: cout<<"Invalid Command."<<endl;

  }

}

}
