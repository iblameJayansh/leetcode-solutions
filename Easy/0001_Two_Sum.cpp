/*
 * Problem: Two Sum
 * Problem ID: 1
 * Difficulty: Easy
 * Language: C++
 * Runtime: 35 ms
 * Memory: 14.1 MB
 * Synced From: LeetCode
 * Date: 2026-07-12
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};