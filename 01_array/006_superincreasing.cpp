// problem link - https://www.codechef.com/problems/SUPINC?tab=statement

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool isPossible(int n, int k, int x){
    if(pow(2,k-1)<=x) return true;
    else return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,x;
	    cin>>n>>k>>x;
	    if(isPossible(n,k,x)) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
}
