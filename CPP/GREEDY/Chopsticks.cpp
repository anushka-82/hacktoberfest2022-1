#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,d;
	cin>>n>>d;
	
	int len[n]={INT_MAX};
	
	for(int i=0;i<n;i++){
	    cin>>len[i];
	}
	
	sort(len,len+n);
	
	int ans=0;
	for(int i=0;i<n;){
	    if(abs(len[i]-len[i+1])<=d){
	        ans+=1;
	        i=i+2;
	    }else{
	        i=i+1;
	    }
	}
	
	cout<<ans;
	return 0;
}
