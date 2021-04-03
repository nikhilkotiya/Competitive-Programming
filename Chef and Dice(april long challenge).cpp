#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	long long t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long sum=0;
	    sum=(n/4)*44;
	    int rem = n%4;
	    if(n>=4)
	    {
	        if(rem==0)
	        {
	            sum=sum+16;
	        }
	        else if(rem==1)
	        {
	            sum=sum+32;
	            
	        }
	        else if(rem==2)
	        {
	            sum=sum+44;
	        }
	        else if(rem==3)
	        {
	            sum+=55;
	        }
	        cout<<sum<<endl;
	    }
	    else
	    {
	        if(rem==1){
	            rem=20;
	        }
	        if(rem==2){
	            rem=36;
	        }
	        if(rem==3){
	            rem=51;
	        }
	        cout<<rem<<endl;
	    }
	    
	}
	return 0;
}
