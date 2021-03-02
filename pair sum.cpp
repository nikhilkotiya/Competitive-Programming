#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int k,t;
    cin>>t;
    int arr[t];
    int flag=0;
    cin>>k;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + t);
    int x=0;
    int last=t-1;
    while(x<last)
    {
        if(arr[x]+arr[last]<k)
        {
            x++;
        }
        else if(arr[x]+arr[last]>k)
        {
            last--;
        }
        else if(arr[x]+arr[last]==k)
        {
            flag=1;
            break;
        }

    }
    if(flag ==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

	return 0;
}
