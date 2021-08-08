#include<bits/stdc++.h>
using namespace std;
void perm(string str, int index)
{
    if(index>=str.length())
    {
        cout<<str<<endl;
        return;
    }

    for(int i=index; i<str.length(); i++)
    {
        swap(str[index], str[i]);
        perm(str, index+1);
        //backtrack
        swap(str[index], str[i]);
    }
}

int main()
{
    string str="";
    cin>>str;
    cout<<"Output: ";
    perm(str,0);
    return 0;
}