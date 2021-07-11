# include <fstream>

using namespace std;
#define add operator()

class record
{
    public:
    void add(string dose,char c,long long phno,string name,int age,string gender,string vaccinename,int dd,int mm,int yy,int hh,int min)
    {
        fstream file;

        file.open("record.txt",ios::app);
        
        file<<dose<<"\t"<<c<<"\t"<<phno<<"\t"<<name<<"\t"<<age<<"\t"<<gender<<"\t"<<vaccinename<<"\t"<<dd<<"/"<<mm<<"/"<<yy<<"\t"<<hh<<":"<<min<<endl;

        file.close();
    }
};