#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    /*
    BRUTEFORCE: save all subarrays using two for loops then find the sum of each subarray to find maximum
        TC:O(N^2) SC:O(N^2)
    OPTIMAL: initialise a sum variable and start from beginning any time the sum<0 happens reset it to 0 everytime make max_sum=max(sum,max_sum) 
        TC:O(N) SC:O(1)
    */
    int sum=0,max_sum=INT_MIN;
    for(int num:nums){
        sum+=num;
        max_sum=max(sum,max_sum);
        sum=max(sum,0);
    }
    return max_sum;
}