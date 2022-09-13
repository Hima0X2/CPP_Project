#include <bits/stdc++.h>

using namespace std;

void toh(int n,char a,char b, char c)
{
  if(n>0)
    {
        /*move n-1 disks from a to b using c*/
        toh(n-1,a,c,b);
        /*move a disc from a to c using b and display this step performed. Also note that a and c are different in the next called function*/
        cout<<"Move a disk from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main()
{
  int n;
  cin>>n;
  toh(n,'a','b','c');
  return 0;
}
//thank you!

