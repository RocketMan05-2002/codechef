//problem link - https://www.codechef.com/problems/AIRM?tab=statement

#include <bits/stdc++.h>
using namespace std;

int runways(int n, int A[], int D[]){
    
    // int maxOfA = *max_element(A,A+n);
    // int maxOfD = *max_element(D,D+n);
    // int maxMinuteVal = max(maxOfA,maxOfD);
    // int freq[maxMinuteVal+1] = {0};
    
    int freq[1440] = {0};
    
    for(int i=0;i<n;i++){
        // for(int j= A[i];j<=D[i];j++){
        //     freq[j]++;
        // }
        freq[A[i]]++;
        freq[D[i]]++;
    }
    
    return *max_element(freq,freq+1440);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n],D[n];
	    for(int i=0;i<n;i++)cin>>A[i];
	    for(int i=0;i<n;i++)cin>>D[i];
	    cout<<runways(n,A,D)<<endl;
	}
	return 0;
}

