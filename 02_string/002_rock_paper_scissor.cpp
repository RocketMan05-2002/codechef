// problem link - https://www.codechef.com/problems/PASCRO

#include <bits/stdc++.h>
using namespace std;

int precedence(char a, char b){
    if(a == 'R'){
        if(b=='R'){
            return 0;
        }else if(b=='P'){
            return -1;
        }else if(b=='S'){
            return 1;
        }
    }else if( a=='P'){
        if(b=='R'){
            return 1;
        }else if(b=='P'){
            return 0;
        }else if(b=='S'){
            return -1;
        }
    }else if(a =='S'){
        if(b=='R'){
            return -1;
        }else if(b=='P'){
            return 1;
        }else if(b=='S'){
            return 0;
        }
    }
}

int fun(int n, string &A, string &B){
    int score=0;
    for(int i=0;i<n;i++){
        score += precedence(A[i],B[i]);
    }
    if(score>0){
        return 0;
    }else{
        return (abs(score)+2)/2;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string A,B;
	    cin>>n>>A>>B;
	    cout<<fun(n,A,B)<<endl;
	}

}
