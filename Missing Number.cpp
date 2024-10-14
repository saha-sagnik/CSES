#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n-1);
    for(int i=0;i<n-1;i++){
        cin>>nums[i];
        
    }
     int ans = missingNumber(nums, n);
     cout<<ans<<endl;
 
     return 0;
    
 
}

