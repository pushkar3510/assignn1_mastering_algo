#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    /*
    BRUTEFORCE: sort the array and then return median element
        TC:O(NLog(N)) SC:O(N)->because of merge sort
    BETTER: use a unsorted_map to store frequency of all elements and return element with frequency greater than n/2
        TC:O(N) SC:O(N)
    OPTIMAL: use Boyer–Moore Majority Vote Algorithm
        TC:O(N) SC:O(1)
    */
    int cnt=1,me=nums[0],n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==me){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt<0){
            me=nums[i];
            cnt=0;
        }
    }
    return me;
}