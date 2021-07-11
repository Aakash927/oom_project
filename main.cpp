#include <iostream>
# include <fstream>

# include <thread>

using namespace std;

# include "admin.h"

# include "slot.h"
# include "reg.h"
# include "account.h"
# include "certificate.h"


int main()
{

    cout<<"Select the operation \n"
            "1.Access the database (Admin)\n"
            "2.Book a slot(Client)"<<endl;
    
    int n; cin>>n;

    if(n==1)
    {
        admin ad;
        ad.access();
        
    }
    
    else if(n==2)
    {
        long long int ph;
        cout<<"Enter your phone number"<<endl;
        cin>>ph;
        account acc= account(ph);



        cout<<"Enter your name"<<endl;
        cin.ignore();
        string name;
        getline(cin,name);

        cout<<"Enter your age"<<endl;
        int age;
        cin>>age;

        cout<<"Enter your gender"<<endl;
        string gender;
        cin>>gender;

        acc.r.setdetails(name,age,gender);


        int c;
        cout<<"Do you want to register for? \n"
                "1.First dose\n"
                "2.Second dose"<<endl;

        while(true)
        {
            cin>>c;
            if(c==1)
            {
                cout<<"Registration for First Dose"<<endl;
                acc.r.d1.display();
                acc.r.d1.s.getslot();
                break;
            }
            else if(c==2)
            {
                cout<<"Registration for Second Dose"<<endl;
                acc.r.d2.display();
                acc.r.d2.s.getslot();
                break;
            }
            else
                cout<<"Invalid Entry\nTry again"<<endl;
        }


      


        // if(c==1)
        // {
        // thread t2(record(),"First Dose",acc.r.d1.s.c,acc.phno,acc.r.name,acc.r.age,acc.r.gender,acc.r.d1.vname,
        //         acc.r.d1.s.dd,acc.r.d1.s.mm,acc.r.d1.s.yy,acc.r.d1.s.hh,acc.r.d1.s.min);
        //     t2.join();
        // }
        // else 
        // {
        // thread t2(record(),"Second Dose",acc.r.d2.s.c,acc.phno,acc.r.name,acc.r.age,acc.r.gender,acc.r.d2.vname,
        //         acc.r.d2.s.dd,acc.r.d2.s.mm,acc.r.d2.s.yy,acc.r.d2.s.hh,acc.r.d2.s.min);
        //     t2.join();
        // }



        if(c==1)
        {
           
            certificate c;
            c.print("First Dose",acc.r.d1.s.c,acc.phno,acc.r.name,acc.r.age,acc.r.gender,acc.r.d1.vname,
                acc.r.d1.s.dd,acc.r.d1.s.mm,acc.r.d1.s.yy,acc.r.d1.s.hh,acc.r.d1.s.min);
        } 
        else
        {
            
            certificate c;
            c.print("Second Dose",acc.r.d2.s.c,acc.phno,acc.r.name,acc.r.age,acc.r.gender,acc.r.d2.vname,
                acc.r.d2.s.dd,acc.r.d2.s.mm,acc.r.d2.s.yy,acc.r.d2.s.hh,acc.r.d2.s.min);
        }
    }

    else
    {
        cout<<"Invalid Entry"<<endl;
        exit(1);
    }
    return 0;
}  