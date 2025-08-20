// problem link - https://www.codechef.com/problems/ATM2

#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            cout<<'1';
            k = k - arr[i];
        }else{
            cout<<'0';
        }
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    fun(arr,n,k);
	}
	return 0;
}