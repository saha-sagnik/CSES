#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums){
    int moves = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i]<nums[i-1]){
        moves+=(nums[i-1]-nums[i]);
        nums[i] = nums[i-1];
        }
    }
    return moves;
}


int main(){
    int size;
    cin>>size;
    vector<int>nums(size);

   for(int i=0;i<size;i++){
    cin>>nums[i];
   }

    int ans = solve(nums);
    cout<<ans;
    return 0;
}