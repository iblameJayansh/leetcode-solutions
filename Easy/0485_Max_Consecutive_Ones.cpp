/*
 * Problem: Max Consecutive Ones
 * Problem ID: 485
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 50.1 MB
 * Synced From: LeetCode
 * Date: 2026-07-21
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                if(count > max)
                    max = count;
            }
            else {
                count = 0;
            }
        }

        return max;
    }
};