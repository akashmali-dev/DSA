//GFG - Rotate Array by One
// Difficulty: Easy
// Approach: Array Manipulation
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<int>& arr) {
        int n = arr.size();

        int last = arr[n - 1];  // Save last element

        // Shift elements to the right
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;  // Put last at first
    }
};
