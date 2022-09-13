#include <bits/stdc++.h>
using namespace std;

// Returns true if n is a power of four
bool checkPowerOf4(unsigned n)
{
    // return true if n is a power of 2, and its only
    // set bit is present at even position
    //return n && !(n & (n - 1)) && !(n & 0xAAAAAAAA);
  return log(n)/log(4)==trunc(log(n)/log(4));
}
int main()
{
    unsigned n;
cin>>n;
    if (checkPowerOf4(n)) {
        cout << n << " is a power of 4";
    }
    else {
        cout << n << " is not a power of 4";
    }

    return 0;
}
