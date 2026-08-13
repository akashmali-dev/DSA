// GFG - Move All Negative Element To End
// Difficulty: Easy
// Approach: Partitioning
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    void moveNegativesToEnd(vector<int>& arr) {
        int n = arr.size();

        vector<int> temp;

        // Add non-negative elements first
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                temp.push_back(arr[i]);
            }
        }

        // Add negative elements after them
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp.push_back(arr[i]);
            }
        }

        arr = temp;
    }
};
