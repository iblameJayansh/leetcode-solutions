/*
 * Problem: Rotate Array
 * Problem ID: 189
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 29.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-18
 */

#include <algorithm>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};