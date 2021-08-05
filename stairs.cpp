#include<bits/stdc++.h>
using namespace std;
int ways(int n)
{
    // only 1,2 or 3 jumps allowed
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return ways(n-1) + ways(n-2) + ways(n-3);
}

int main()
{
    int n;
    cout<<"Enter number of steps: ";
    cin>>n;
    cout<<"Ways: "<< ways(n);
    return 0;
}