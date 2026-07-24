/*
 * Problem: Single Number
 * Problem ID: 136
 * Difficulty: Easy
 * Language: C++
 * Runtime: 15 ms
 * Memory: 20.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-24
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