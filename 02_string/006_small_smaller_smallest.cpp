// problem link - https://www.codechef.com/problems/BSHORT?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = count(s.begin(), s.end(), '1');
        if(ones == 0) cout<<n<<endl;
        else if (ones % 2 == 0) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
    return 0;
}