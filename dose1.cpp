# include <iostream>
using namespace std;

# include "dose1.h"

dose1::dose1(){}

void dose1::display()
    {
        cout<<"Choose your vaccine - Covishield/Covaxin"<<endl;
        cin>>vname;
        cout<<"The vaccine selected is "<<vname<<endl;
    }
