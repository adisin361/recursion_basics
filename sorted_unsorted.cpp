#include<bits/stdc++.h>
using namespace std;

bool sorted_unsorted(vector<int> arr, int index)
{
    if(index>=arr.size())
        return true;
    if(arr[index]<arr[index-1])
        return false;
    return sorted_unsorted(arr, index+1);
}

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n;i++)
        cin>>arr[i];
    bool ans = sorted_unsorted(arr, 1);
    if(ans==true)
        cout<<"Sorted";
    else
        cout<<"Unsorted";
    return 0;
}