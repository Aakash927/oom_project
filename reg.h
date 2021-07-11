#ifndef __reg
#define __reg

# include <string>
using namespace std;


# include "dose1.h"
# include "dose2.h"

class reg
{
    public:
    string name;
    int age;
    string gender;

    public:
    reg(); 

    void setdetails(string,int,string);

    dose1 d1;
    dose2 d2;

};

#endif