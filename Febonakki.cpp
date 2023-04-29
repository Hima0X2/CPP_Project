#include<bits/stdc++.h>
using namespace std;
int fib(int n){
if(n==1)
     {return 0;}
if(n==2)
    {
         return 1;
    }
int sum=fib(n-2)+fib(n-1);
    return sum;
}
int main()
{
     int n,i;
     cin>>n;
      i=fib(n);
      cout<<i<<endl;
}
