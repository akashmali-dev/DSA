// LeetCode #1089 - Duplicate Zeros
// Difficulty: Easy
// Approach: In-place shifting
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();

        for (int i = 0; i < n; i++) {

            // If current element is 0, duplicate it
            if (arr[i] == 0) {

                // Shift all elements to the right
                for (int j = n - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }

                // Insert the duplicate zero
                if (i + 1 < n) {
                    arr[i + 1] = 0;
                }

                // Skip the duplicated zero
                i++;
            }
        }
    }
};
