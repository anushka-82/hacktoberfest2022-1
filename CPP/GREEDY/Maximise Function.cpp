#include <iostream>
#include <climits>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    ll max = INT_MIN;
	    ll min = INT_MAX;
	    for(int i=1; i<=n; i++) {
	        ll x; cin>>x;
	        if(x > max) max = x;
	        if(x < min) min = x;
	    }
	    cout<<2*(max-min)<<endl;
	}
	return 0;
}
