// problem link - https://www.codechef.com/problems/P2P

#include <bits/stdc++.h>
using namespace std;

bool fun(int n, string &A, string &B){
    int one1 = 0;
    int one0 = 0;
    for(int i=0;i<n;i++){
        if(A[i]=='1' && B[i]=='1'){
            one1++;
        }else if(A[i]=='1' || B[i]=='1'){
            one0++;
        }
    }
    if(one1%2 ==0 && one0 == 0){
        return false;
    }else{
        return true;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int  n;
	    string A,B;
	    cin>>n>>A>>B;
	    if(fun(n,A,B)) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
}
