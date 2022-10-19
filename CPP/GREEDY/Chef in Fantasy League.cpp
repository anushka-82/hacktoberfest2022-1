#include <iostream>
using namespace std;

int main() {
	
	int t;
	std::cin >> t;
	while(t--)
	{
	   int n,p,flag=0;
	    cin>>n>>p;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int z=100-p;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]==0)
	        {
	            for(int j=0;j<n;j++)
	            {
	                if(b[j]==1)
	                {
	                    if(a[i]+a[j]<=z)
	                    {
	                        flag=1;
	                        break;
	                    }
	                }
	            }
	            if(flag==1)
	            {
	                break;
	            }
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
