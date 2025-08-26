// problem link - https://www.codechef.com/problems/LPSS?tab=statement

/*
For palindrome, take any two counts. If both odd → reduce by 1. 
Then consider all 3 possible pairs, and since opponent minimizes, take the min.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	for(cin>>t;t--;){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int sum1=a+b-(a%2!=0 && b%2!=0);
	    int sum2=b+c-(b%2!=0 && c%2!=0);
	    int sum3=a+c-(a%2!=0 && c%2!=0);
	    
	    cout<<min(sum1,min(sum3,sum2))<<endl;
	}

}