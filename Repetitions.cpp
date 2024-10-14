#include <bits/stdc++.h>

using namespace std;

int solve(string& s) {
    int count = 1;
    int ans = 1; 

    int second = 0; 
    
    while (second < s.length() - 1) {
        if (s[second] == s[second + 1]) {
            count++;
            ans = max(ans, count);     
        } else {
            count = 1;  
        }
        second++;
    }
    
    return ans;
}

int main() {
    string s;
    cin >> s;
    int n = solve(s);
    cout << n;
    return 0;
}
