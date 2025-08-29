// problem link - https://www.codechef.com/problems/CHEFA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long chef = 0;
        for(int i=n-1;i>=0;i=i-2){
            chef += a[i];
        }
        cout<<chef<<endl;     
    }
    return 0;
}  
