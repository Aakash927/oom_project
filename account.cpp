
# include <iostream>
using namespace std;

namespace captcha
{
    #include "captcha.h"
}

# include "account.h"


account::account(){};

account::account(long long int phno)
    {
        this->phno = phno;
        cout<<"Enter the captcha"<<endl;
        string s=captcha::gen_random(7);
        cout<<s<<endl;
        string str;

        while(true)
        {
        cin>>str;
        if(str==s) 
        {
        cout<<"Not a bot"<<endl;
         break;   
        }
        else 
        cout<<"Please reenter the captcha"<<endl;
        }
        

    }
