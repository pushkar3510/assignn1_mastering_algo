#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
    /*
    BRUTEFORCE: store all subarrays and then find the one with maximum product
        TC:O(N^2) SC:O(N^2)
    OPTIMAL: initialise a product variable=1 then multiply elements and keep checking for max_product=max(product,max_product) and reset product to 1 if it gets equal to 0, but this time we need to calculate from both sides left and right due to discrepancy in signs
        TC:O(N) SC:O(1)
    */
    int product=1,max_product=INT_MIN,n=nums.size();
    for(int i=0;i<n;i++){
        product*=nums[i];
        max_product=max(product,max_product);
        if(product==0)product=1;
    }
    product=1;
    for(int i=n-1;i>=0;i--){
        product*=nums[i];
        max_product=max(product,max_product);
        if(product==0)product=1;
    }
    return max_product;
}