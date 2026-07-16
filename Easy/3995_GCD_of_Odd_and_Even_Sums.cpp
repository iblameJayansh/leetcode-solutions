/*
 * Problem: GCD of Odd and Even Sums
 * Problem ID: 3995
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-16
 */

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return __gcd(n*n, n*(n+1));
    }
};