/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
bitset<mx> is_prime;
vector<int> prime;
void Prime(int n){
     n=n+100;
     int i,j;
      is_prime[2]=1;
      prime.push_back(2);
     for(i=3;i<=n;i=i+2){
          is_prime[i]=1;
     }
     for(i=3;i<=sqrt(n);i=i+2){
          if(is_prime[i]==1){
               for(j=i*i;j<=n;j=j+(i+i)){
                    is_prime[j]==0;
               }
          }
     }
     for(i=3;i<=n;i=i+2){
           if(is_prime[i]==1){
                prime.push_back(i);
           }
     }
}
int phi(long long int n){
     int c=n;
     for(auto u:prime){
          if(1LL*u*u>n||n==0){
               break;
          }
          if(n%u==0){
                    c=c/u;
          c=c*(u-1);
               while(n%u==0){
                    n=n/u;
               }
          }
     }
     if(n>1){
          c=c/n;
          c=c*(n-1);
     }
     return c;
}
int main()
{
     optimize();
     Prime(1e6);
     long long int t,i,n;
     cin>>t;
     while(t--){
     cin>>n;
     cout<<phi(n)<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



