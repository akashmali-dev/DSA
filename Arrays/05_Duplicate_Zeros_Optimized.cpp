// LeetCode #1089 - Duplicate Zeros
// Difficulty: Easy
// Approach: Two-Pass / In-place
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = 0;

        // Step 1: Find position in expanded array
        while (j < n) {
            if (arr[i] == 0)
                j += 2;
            else
                j += 1;

            i++;
        }

        i--;
        j--;

        // Step 2: Fill from back
        while (i >= 0) {
            if (j < n)
                arr[j] = arr[i];

            if (arr[i] == 0) {
                j--;

                if (j < n)
                    arr[j] = 0;
            }

            i--;
            j--;
        }
    }
};
