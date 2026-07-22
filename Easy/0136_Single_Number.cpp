/*
 * Problem: Single Number
 * Problem ID: 136
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 20.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-22
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
        
    }
};