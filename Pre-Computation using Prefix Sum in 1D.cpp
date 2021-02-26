    #include <iostream>
    using namespace std;
    const int x=1e5+10;
    int arr[x];
    int main() {
        long long n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            arr[i]=arr[i]+arr[i-1];
        }
        int q;
        cin>>q;
        while(q--)
        {
            int sum;
            int l,r;
            cin>>l>>r;
            sum=arr[r]-arr[l-1];
            cout<<sum<<endl;
        }

    }a
