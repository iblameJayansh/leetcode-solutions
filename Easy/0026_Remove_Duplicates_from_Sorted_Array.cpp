/*
 * Problem: Remove Duplicates from Sorted Array
 * Problem ID: 26
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 22.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-17
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1 ; j < nums.size(); j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
        
    }
};