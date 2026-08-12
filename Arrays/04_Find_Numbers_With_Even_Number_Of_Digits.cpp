// LeetCode #1295 - Find Numbers with Even Number of Digits
// Difficulty: Easy
// Approach: Count the digits of each number
// Time Complexity: O(n * d)
// Space Complexity: O(1)

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int answer = 0;  // Stores count of numbers with even digits

        // Check every number in the array
        for (int num : nums) {

            int digits = 0;  // Count digits of current number

            // Count digits by repeatedly removing the last digit
            while (num != 0) {
                num = num / 10;
                digits++;
            }

            // If number of digits is even, increase answer
            if (digits % 2 == 0) {
                answer++;
            }
        }

        return answer;
    }
};
