// LeetCode #485 - Max Consecutive Ones
// Difficulty: Easy
// Approach: Linear Traversal / Streak Counting
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;       // Current consecutive 1s
        int maxCount = 0;    // Maximum consecutive 1s found

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1) {
                // Increase current streak
                count++;

                // Update maximum streak
                maxCount = max(maxCount, count);
            }
            else {
                // 0 breaks the consecutive sequence
                count = 0;
            }
        }

        return maxCount;
    }
};
