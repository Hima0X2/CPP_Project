// A C++ program that pauses screen at the end in Windows OS
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	if (system(NULL))
	cout << "Command processor exists";
	else
	cout << "Command processor doesn't exists";

	return 0;
}

