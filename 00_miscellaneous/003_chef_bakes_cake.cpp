// problem link - https://www.codechef.com/problems/CHEFBAKES77

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,x,y;
    cin>>n>>x>>y;
    int count = 0;
    while(n>0){
        int cap = y;
        while(cap>=x && n>0){
            cap = cap - x;
            n--;
        }
        count++;
    }
    cout<<count<<endl;
}
