// LeetCode #1 - Two Sum
// Difficulty: Easy
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
