#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	float k1,k2,k3,v;
	cin>>t;
	while(t--)
	{
	    double b=9.58;
	    cin>>k1>>k2>>k3>>v;
	    float f = 100.00/(k1*k2*k3*v);
	    if(f>=9.575)
	    {
	        cout<<"NO";
	    }
	    else
	    {
	        cout<<"YES";
	    }
	    cout<<endl;

	}
	return 0;
}
