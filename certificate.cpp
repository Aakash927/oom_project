
# include <iostream>
# include <thread>
# include "record.h"
# include "loading.h"

# include "certificate.h"
using namespace std;

certificate::certificate(){}


    void certificate::print(string dose,char c,long long phno,string name,int age,string gender,string vaccinename,int dd,int mm,int yy,int hh,int min)
    {
        thread t1(loading);
        thread t2(record(),dose,c,phno,name,age,gender,vaccinename,dd,mm,yy,hh,min);


        t1.join();
        t2.join();
         cout<<"\nYour slot certificate for "<<dose<<endl;
        cout<<dose<<"\t"<<c<<"\t"<<phno<<"\t"<<name<<"\t"<<age<<"\t"<<gender<<"\t"<<vaccinename<<"\t"<<dd<<"/"<<mm<<"/"<<yy<<"\t"<<hh<<":"<<min<<endl;
    }

