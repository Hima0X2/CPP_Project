#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[10000][10000],i,j,d,n,b[10000],z,c=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>b[i];
     }
     cin>>z;
      for(i=0;i<n;i++){
         for(j=0;j<z;j++){
                a[i][0]=1;
          if(b[i]>j){
               a[i][j]=a[i-1][j];
          }
          else{
               a[i][j]=a[i-1][j]+a[i][j-b[i]];
               c++;
          }
         }
     }
      cout<<c<<endl;
}
