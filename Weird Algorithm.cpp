#include<bits/stdc++.h>

using namespace std;

vector<long long>solve(long long n){
    vector<long long>result;
    result.push_back(n);

    while(n > 1){
        if(n % 2 == 0){
            result.push_back(n / 2);
            n = n / 2;
        }
        else {
            result.push_back(n * 3 + 1);
            n = (3 * n) + 1;
        }
    }
   
    return result;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> result = solve(n);
    
    for(long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
