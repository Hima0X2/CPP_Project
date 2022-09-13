/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const int mx = 1e6+123;
bitset<mx> is_prime;
vector<int> prime;
void Prime(int n)
{
    n=n+100;
    int i,j;
    is_prime[2]=1;
    prime.push_back(2);
    for(i=3; i<=n; i=i+2)
    {
        is_prime[i]=1;
    }
    for(i=3; i<=sqrt(n); i=i+2)
    {
        if(is_prime[i]==1)
        {
            for(j=i*i; j<=n; j=j+(i+i))
            {
                is_prime[j]==0;
            }
        }
    }
    for(i=3; i<=n; i=i+2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }
}
long long int pow(long long int a, long long int b){
     long long int i,p=1;
     for(i=1;i<=b;i++){
          p=p*a;
     }
     return p;
}
int main()
{
    optimize();
    Prime(1e6);
    long long int t,i,n,l,r;
    cin>>t;
    while(t--)
    {
         map<long long int,long long int> mp;
        cin>>l>>r;
        if(r-l>3)
        {
            cout<<0<<endl;
            continue;
        }
        else if(r==l)
        {
            cout<<l%10<<endl;
            continue;
        }
        else if(r-l==1)
        {
            cout<<(l%10*r%10)%10<<endl;
            continue;
        }
        else
        {
            while(l<=r)
            {
                long long int p=l;
                for(auto u:prime)
                {
                     if(p==1){
                         break;
                     }
                     long long int c=0;
                   if(p%u==0){
                       c++;
                       p=p/u;
                       while(p%u==0){
                         c++;
                         p=p/u;
                       }
                       mp[u]=max(c,mp[u]);
                   }
                }
                if(p>1){
                    mp[p]=max(1LL,mp[p]);
                }
                l++;
            }
            long long int x=1;
            for(auto u:mp){
         x=(x*pow(u.first,u.second))%10;
            }
            cout<<x<<endl;
        }
    }
}
/// ALHAMDULILLAH



