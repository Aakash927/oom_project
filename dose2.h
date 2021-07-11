#ifndef __dose2
#define __dose2

# include "vaccine.h"
# include "slot.h"

class dose2:public vaccine
{
    public:
    slot s;

    public:

    dose2();

    void display() override;
};

#endif