#include<bits/stdc++.h>
using namespace std;
long long int decimalToBinary(long long int n){
    long long int remainder;
    long long int binary = 0, i = 1;
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary=binary+(remainder*i);
        i = i*10;
    }
    return binary;
}
int main()
{
    int n,i,j;
    cin>>n;
    j=pow(2,n);
    for(i=0; i<j; i++)
    {
        cout<<decimalToBinary(i)<<endl;
    }
}
