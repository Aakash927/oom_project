# include <iostream>
# include <fstream>
# include "admin.h"
using namespace std;

void admin::access()
{
    cout<<"Enter the password (Password is 'password')"<<endl;
        string str; cin>>str;
        fstream file;
        if(str=="password")
        {
            file.open("record.txt",ios::in);
            string s;
            while(getline(file,s))
            cout<<s<<endl;
            file.close();
        }
}

