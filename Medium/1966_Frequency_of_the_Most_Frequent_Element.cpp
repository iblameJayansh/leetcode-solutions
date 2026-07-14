/*
 * Problem: Frequency of the Most Frequent Element
 * Problem ID: 1966
 * Difficulty: Medium
 * Language: C++
 * Runtime: 42 ms
 * Memory: 106 MB
 * Synced From: LeetCode
 * Date: 2026-07-14
 */

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, ans = 0;
        long curr = 0;

        for (int right = 0; right < nums.size(); right++) {
            long target = nums[right];
            curr += target;

            while ((right - left + 1) * target - curr > k) {
                curr -= nums[left];
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};