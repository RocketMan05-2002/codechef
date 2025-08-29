// problem link - https://www.codechef.com/problems/GYMDAY

// international gym day
// for every trial session we will get additional D% discount.
// minimum trial sessions for him to get lieftime membership.
#include<bits/stdc++.h>
using namespace std;
int minTrials(int d, int x, int y){
	int trials = 0;
	bool canAfford = false;
	while(trials < 100){
		int disc_percent = min(trials*d,100);
		double disc_price = x*(100-disc_percent)/100; // utna percent off hoga
		int rem_budget = y - trials;
		if(rem_budget >= disc_price){
			canAfford = true;
			break;
		}
		if(disc_percent == 100) break;
		trials++;
	}
	if(canAfford) return trials;
	else return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int d,x,y;
		cin>>d>>x>>y;
		cout<<minTrials(d,x,y)<<endl;
	}
	return 0;
}