/*
 * Problem: Binary Search
 * Problem ID: 792
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 31.3 MB
 * Synced From: LeetCode
 * Date: 2026-07-16
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(target == nums[i]){
                return i;
            }
        }
        return -1;
    }   
};