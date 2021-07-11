# include <iostream>
# include <thread>
# include <chrono>
using std::cout;
using std::endl;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using namespace std;

void loading()
{

	for(int i=1;i<=10;i++)
	{
		
		sleep_for(milliseconds(300));
		cout.flush();
		cout<<"\rLoading /";
		sleep_for(milliseconds(300));
		cout.flush();
		cout<<"\rLoading |";
		sleep_for(milliseconds(300));
		cout.flush();
		cout<<"\rLoading \\";
		sleep_for(milliseconds(300));
		cout.flush();
		cout<<"\rLoading -";
	}
	cout<<endl;
}

		
