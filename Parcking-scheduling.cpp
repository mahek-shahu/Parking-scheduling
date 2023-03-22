#include<iostream>
using namespace std;
int main()
{
    int car=0;
    int bike=0;
    int rik=0,choice,c;
   
     cout<<"\t___________________________"<<endl;
    cout<<"\t|Instructions to be follow |"<<endl;
    cout<<"\t|- - - - - - - - - - - - - |"<<endl;
    cout<<"\t|Press 1 to mark Car       |"<<endl;
    cout<<"\t|Press 2 to mark Bike      |"<<endl;
    cout<<"\t|Press 3 to mark rikhhaw   |"<<endl;
    cout<<"\t|Press 4 to view the record|"<<endl;
    cout<<"\t|Press 5 to exit           |"<<endl;
    cout<<"\t|__________________________|"<<endl;

   while(true)
   {
        cout<<"Enter choice :";
        cin>>c;
        if(c==1)
    {
        car++;
        cout<<"Car mark"<<endl;
    }
    else if(c==2)
    {
        bike++;
        cout<<"Bike mark"<<endl;
    }
    else if(c==3)
    {
        rik++;
        cout<<"Rikshaw mark"<<endl;
    }
    else if(c==4)
    {
        cout<<"\t______________________"<<endl;
        cout<<"\t|** Parking Record **|"<<endl;
        cout<<"\t|                    |"<<endl;
        cout<<"\t|Total Cars : "<<car<<"      |"<<endl;
        cout<<"\t|                    |"<<endl;
        cout<<"\t|Total Bikes : "<<bike<<"     |"<<endl;
          cout<<"\t|                    |"<<endl;
        cout<<"\t|Total Rikshaws : "<<rik<<"  |"<<endl;
        cout<<"\t|____________________|"<<endl;
    }
    else if(c==5)
    {
        cout<<"\t\t---EXIT---";
        exit(0);
    }
    else{
        cout<<"invalid choice !!"<<endl;
    }
       
   }
}
