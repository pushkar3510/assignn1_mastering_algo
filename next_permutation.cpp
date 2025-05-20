#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n=nums.size(),b=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            b=i;
            break;
        }
    }
    if(b==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i]>nums[b]){
            swap(nums[i],nums[b]);
            break;
        }
    }
    reverse(nums.begin()+b+1,nums.end());
}