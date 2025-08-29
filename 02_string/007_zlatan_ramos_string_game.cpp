// problem link - https://www.codechef.com/problems/STRAME

#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool isZlatanWinning(int n, string &s){
    int moves = 0;
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty() || st.top()==s[i]){
            st.push(s[i]);
        }else{
            st.pop();
            moves++;
        }
    }
    if(moves%2==1) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(isZlatanWinning(n,s)) cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
}