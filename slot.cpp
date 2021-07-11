
# include <iostream>
namespace checktime
{
    #include "time.h"
}

namespace checkdate
{
    #include "date.h"
}

# include "slot.h"
using namespace std;

    slot::slot(){}

    void slot::getslot()
    {
        cout<<"Choose a center from A-Z"<<endl;
        
        while(true)
        {
            cin>>c;
            if((c>='A' && c<='Z')  || (c>='a' && c<='z'))
            {
                break;
            }
            else
            cout<<"Enter a valid centre"<<endl;
        }

        cout<<"Enter a date in the format dd/mm/yyyy"<<endl;
        while(true)
        { 
        scanf("%d/%d/%d",&dd,&mm,&yy);
        if(checkdate::isValidDate(dd,mm,yy))
            break;
        else
            cout<<"Enter a valid date"<<endl;
        }

        cout<<"Enter a time slot in the format hh:mm"<<endl;
        while(true)
        {
            scanf("%d:%d",&hh,&min);
            if(checktime::isValidTime(hh,min))
                {
                    cout<<"Thank You"<<endl;
                    break;
                }
            else 
                cout<<"Enter a valid time"<<endl;
        }
    }
