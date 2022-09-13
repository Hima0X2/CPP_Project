#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     ofstream clss;
     string s;
     int n=1;
     clss.open("b.csv",ios::app);
     for(int i=0;i<10;i++){
     cin>>s;
     }
  for(int i=0;i<10;i++){
    clss<<s<<endl;
     }
     clss<<n<<endl;
     clss<<n<<endl;
     clss<<n<<endl;
     clss<<s<<endl;
}
