#include<bits/stdc++.h>
using namespace std;

void sub_sequence(string i, string o, int index)
{
    if(index>=i.length())
    {
        cout<<o<<endl;
        return;
    }

    //don't include
    sub_sequence(i, o, index+1);

    //include
    o.push_back(i[index]);
    sub_sequence(i, o, index+1);
}

int main()
{
    string i;
    string o = "";
    cout<<"Enter a string: ";
    cin>>i;
    cout<<"Printing all subsequence: "<<endl;
    sub_sequence(i, o, 0);
    return 0;
}