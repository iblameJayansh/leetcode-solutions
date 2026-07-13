/*
 * Problem: Check if Array Is Sorted and Rotated
 * Problem ID: 1878
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-13
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Check if the array is non-decreasing
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;
        
        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
    }
};