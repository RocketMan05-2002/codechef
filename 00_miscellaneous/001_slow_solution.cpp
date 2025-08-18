// problem link - https://www.codechef.com/problems/SLOWSOLN

#include <bits/stdc++.h>
using namespace std;

int fun(int maxT, int maxN, int sumN){
    int t = maxT;
    int s = sumN;
    int ans = 0;
    while(t>0 && s!=0){
        if(maxN <= s){
            ans += (maxN)*(maxN);
            s = s-maxN;
        }else{
            ans += (s%maxN)*(s%maxN);
            s = s-(s%maxN);
        }
        t--;
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int maxT,maxN,sumN;
	    cin>>maxT>>maxN>>sumN;
	    cout<<fun(maxT,maxN,sumN)<<endl;
	}
}
