// problem link - https://www.codechef.com/problems/LINCHESS

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int fun(int arr[], int n, int k){
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		int val = arr[i];
		int count = 0;
		while(val<k){
			val += arr[i];
			count++;
			if(val == k){
				m[arr[i]] = count;
			}
		}
	}
	int mini = INT_MAX;
	int minVal = -1;
	for(auto it:m){
		if(it.second < mini){
			mini = it.second;
			minVal = it.first;
		}
	}
	return minVal;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<fun(arr,n,k)<<endl;
	}
	return 0;
}