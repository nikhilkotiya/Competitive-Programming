#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>n>>k;
	    cin>>s;
	    if(k==0)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        
	            int count=0;
	            int flag=0;
	            for(int i=0;i<s.size();i++)
	            {
	                if(s[i]=='*')
	                {
	                    count++;
	                    if(count==k)
	                    {
	                        flag=1;
	                       }
	                    if(s[i+1]!='*')
	                    {
	                        count=0;
	                    }
	                }
	            }
	            if(flag==1)
	            {
	                cout<<"YES"<<endl;
	            }
	            else
	            {
	                cout<<"NO"<<endl;
	            }
	        }
	   
	            
	               
	  
	}
	
	return 0;
}
