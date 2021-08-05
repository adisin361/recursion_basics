#include<bits/stdc++.h>
using namespace std;

void super_set(vector<int>input, vector<int>output, int index)
{
    if(index>=input.size())
    {
        for(auto i: output)
            cout<<i<<" ";
        cout<<endl;

        return;
    }

    //don't include
    super_set(input, output, index+1);

    // include
    output.push_back(input[index]);
    super_set(input, output, index+1);
}

int main()
{
    vector<int>input;
    vector<int>output;
    int size, element;
    cout<<"Size: ";
    cin>>size;
    cout<<"Enter Elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>element;
        input.push_back(element);
    } 
    super_set(input, output, 0);
    return 0;
}

