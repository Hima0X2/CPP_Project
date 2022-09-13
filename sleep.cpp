#include <iostream> //for using cout
//#include<unistd.h>    //for linux
#include <Windows.h>     //for using the function Sleep

using namespace std;    //for using cout

int main(void)
{
   cout << "test" << endl;
   Sleep(5000);         //make the programme waiting for 5 seconds
   cout << "test" << endl;
   usleep(2000);         // wait for 2 seconds before closing

   return 0;
}
