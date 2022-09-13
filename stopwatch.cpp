#include<bits/stdc++.h>
#include <iomanip> //this library is needed for setw
#include<Windows.h>
using namespace std;
int main()
{
int h=0,m=0,s=0,flag;
while(true){
     system("cls");
          cout << setw (70);
     cout<<"|-----------STOPWATCH-----------|"<<endl<<endl;
     cout << setw (49);
     cout<<"||---------"<<h<<":"<<m<<":"<<s<<"----------||"<<endl<<endl;
     cout << setw (70);
     cout<<"|-------------------------------|"<<endl;
          s++;
     if(s==60){
          m++;
          s=0;
          if(m==60){
               h++;
               m=0;
               if(h==60){
                   h=0;
                   cout<<"1.continue.."<<endl;
                   cout<<"2.exit.."<<endl;
                   cin>>flag;
                   if(flag==1){
                    continue;
                   }
                   else{
                    exit(0);
                   }
               }
     }
}
Sleep(500);
}
}

