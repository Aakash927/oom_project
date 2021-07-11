# include <iostream>
using namespace std;

# include "dose2.h"

dose2::dose2(){}

// dose2::dose2(int vid,string vname)
// {
//     this->vid = vid;
//     this->vname = vname;
// }

 void dose2::display() 
{
    cout<<"Choose your vaccine - Covishield/Covaxin"<<endl;
        cin>>vname;
        cout<<"The vaccine selected is "<<vname<<endl;
}
