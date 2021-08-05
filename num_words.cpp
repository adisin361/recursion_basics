#include<bits/stdc++.h>
using namespace std;

void num_word(int n, string str[])
{
    if(n==0)
        return;
    num_word(n/10, str);
    cout<<str[n%10]<<" ";
}

int main()
{
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    num_word(456, str);
    return 0;
}
