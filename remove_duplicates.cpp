#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int k=0,n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]!=nums[i+1]){
            nums[k++]=nums[i];
        }
    }
    if(k==0)return 1;
    if(nums[n-1]!=nums[k-1])nums[k++]=nums[n-1];
    return k;
}