#include<iostream>
using namespace std;

class bill
{
  char coustemername[20];
  int EC_id;
  float charge,unit;
  public:
  void getdata()
  {
      cout<<"your electricity info.."<<endl;
      cout<<"enter your name"<<endl;
      cin>>coustemername;
      cout<<"coustemer id no:"<<endl;
      cin>>EC_id;
      cout<<"enter your unit"<<endl;
      cin>>unit;
      
      if(unit>=100)
      {
          charge=(0.60*unit);
          cout<<"the charges is:"<<charge<<endl;
          
    
      }
      else if(unit>=100&&unit<=200)
      {
          charge=(0.80*unit);
          cout<<"the charge is:"<<charge<<endl;
        
      }
      else if(unit>=200&&unit<=300)
      {
         charge=(0.92*unit); 
         cout<<"the charges is:"<<charge;
         
      }
      else if(unit<=100)
      {
          charge=50;
          cout<<"the charges is:"<<charge<<endl;
      }
  }
  void showdata()
  {
      cout<<"coustemer name is:"<<coustemername<<endl;
      cout<<" elctricity ID IS:"<<EC_id<<endl;
      cout<<"unit consume"<<unit<<endl;
  }
  };
  int main()
{
    bill b1;
    b1.getdata();
    b1.showdata();
    return 0;
}





