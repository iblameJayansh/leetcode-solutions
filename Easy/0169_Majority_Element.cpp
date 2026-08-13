/*
 * Problem: Majority Element
 * Problem ID: 169
 * Difficulty: Easy
 * Language: C++
 * Runtime: 3 ms
 * Memory: 28.2 MB
 * Synced From: LeetCode
 * Date: 2026-08-13
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element;
        for(int i = 0 ; i < nums.size();i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        int count1 = 0;
    for(int i = 0 ; i < nums.size();i++){
        if(nums[i]==element){
            count1++;
        }
        if(count1 > nums.size()/2){
            return element;
        }
    }
    return -1;
    }
};