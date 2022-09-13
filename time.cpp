#include <bits/stdc++.h>
using namespace std;

int main( )
{

	 time_t ttime;
	 tm *start_time = localtime(&ttime);
	 // Setting the time January 1, 2030 11:23:45
	 // We must have to set time and date according to the tm format of ctime library
	 // that's why I decrement those values
	 start_time->tm_year = 2030-1900;
	 start_time->tm_mon = 1-1;
	 start_time->tm_mday = 1;
	 start_time->tm_hour = 11-1;
	 start_time->tm_min = 23-1;
	 start_time->tm_sec = 45-1;
	 // converting time_t to tm format
	 // cause srand() take only integer data and
	 // tm data type return an integer data
	 time_t st_time = mktime(start_time);
	 srand(st_time);
	 cout << "The PIN is: " << rand() << endl;
	 // To check the convertation is alright
	 start_time=localtime(&st_time);
	 cout << "Year: "<< 1900 + start_time->tm_year << endl;
	 cout << "Month: "<< 1 + start_time->tm_mon<< endl;
	 cout << "Day: "<< start_time->tm_mday << endl;
	 cout << "Time: "<< 1 + start_time->tm_hour << ":";
	 cout << 1 + start_time->tm_min << ":";
	 cout << 1 + start_time->tm_sec << endl;


}
