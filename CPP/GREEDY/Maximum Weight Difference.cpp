#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n],s=0;
	    if(k>n/2) k= n-k;
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	  //  s+=a[i];
	    }
	    sort(a,a+n);
	    long long son=0,dad=0;
	    for(int i=0;i<k;i++){
	        son+=a[i];
	    }
	    for(int i=k;i<n;i++){
	        dad+=a[i];
	    }
	  
	  cout<<abs(dad-son)<<endl;
	}
	return 0;
}
