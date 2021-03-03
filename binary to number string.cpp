#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string b;
        cin>>n;
        cin>>b;
        long long int sum=0; 
        long long x=1;
        for(int i=b.size()-1;i>=0;i--)
        {
            int c = b[i] -'0';
            sum = sum + (c * x);
            x = x * 2;
        }
        cout<<sum<<endl;
    }
}