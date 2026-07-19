/*
 * Problem: Missing Number
 * Problem ID: 268
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 21.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-19
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //case 1
        if(nums[0] != 0)return 0;
        //case 2 
        if(nums[n-1] != n)return n;
        for(int i =1;i<nums.size();i++){
            if(nums[i] != i){
            //case 3
            return i;
            }
        }
        return 0;
    }
};
