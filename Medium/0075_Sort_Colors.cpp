/*
 * Problem: Sort Colors
 * Problem ID: 75
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.5 MB
 * Synced From: LeetCode
 * Date: 2026-08-12
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ;
        int mid = 0;
        int high = n - 1 ;
        while(mid <= high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low ++;
                mid ++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};