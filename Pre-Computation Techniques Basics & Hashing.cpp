#include <iostream>
using namespace std;
const int n= 1e7+10;
long long fact[n];

int main() {
    int x,b,q;
    cin>>b;
    int arr[b];
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<b;j++)
    {
        int count =0;
    
        fact[arr[j]] ++;
    }
    cin>>q;
    while(q--)
    {
        int c;
        cin>>c;
   
        cout<<fact[c];
    }
return 0;
}