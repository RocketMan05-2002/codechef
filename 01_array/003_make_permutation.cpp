// problem link - https://www.codechef.com/problems/MAKEPERM?tab=statement

#include <bits/stdc++.h>
using namespace std;

bool fun(int arr[], int n){
    sort(arr,arr+n); // sort the array
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=(i+1))count++;
    }
    if(count!=n) return false;
    else return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    if(fun(arr,n)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}