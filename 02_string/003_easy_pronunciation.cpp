// problem link - https://www.codechef.com/problems/EZSPEAK

#include <bits/stdc++.h>
using namespace std;

bool isConsonent(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        return false;
    }
    return true;
}

bool fun(int n, string &S){
    int curlen = 0;
    int maxlen = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(isConsonent(S[i])){
            curlen++;
            maxlen = max(maxlen,curlen);
            if(maxlen == 4){
                flag = false;
                break;
            }
        }else{
            curlen = 0;
        }
    }
    return flag;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string S;
	    cin>>S;
	    if(fun(n,S)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
