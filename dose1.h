#ifndef __dose1
#define __dose1

# include "vaccine.h"
# include "slot.h"

class dose1:public vaccine
{
    public:
    slot s;
    public:

    dose1();

    void display() override;
};

#endif