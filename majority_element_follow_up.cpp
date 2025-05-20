#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    /*
    BRUTEFORCE: use unordered_set to find frequency of all elements and then return elements with frequency greater than n/3
    TC:O(N) SC:O(N)
    OPTIMAL: using modified version of Boyer–Moore Majority Vote Algorithm
    TC:O(N) SC:O(1)
    */
    int n = nums.size();
    int me1 = 0, me2 = 1, cnt1 = 0, cnt2 = 0;
    for (int num : nums) {
        if (num == me1) cnt1++;
        else if (num == me2) cnt2++;
        else if (cnt1 == 0) me1 = num, cnt1 = 1;
        else if (cnt2 == 0) me2 = num, cnt2 = 1;
        else cnt1--, cnt2--;
    }
    cnt1 = cnt2 = 0;
    for (int num : nums) {
        if (num == me1) cnt1++;
        if (num == me2) cnt2++;
    }
    vector<int> rv;
    if (cnt1 > n/3) rv.push_back(me1);
    if (cnt2 > n/3 && me1 != me2) rv.push_back(me2);
    return rv;
}
