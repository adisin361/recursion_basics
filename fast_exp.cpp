#include<bits/stdc++.h>
using namespace std;

int exp(int e)
{
    if(e==0)
        return 1;
    int ans = exp(e/2);
    if(e&1)
    // for odd
        return 2*ans*ans;
    else
    // for even
        return ans*ans;
}

int main()
{
    cout<<exp(10);
    return 0;
}