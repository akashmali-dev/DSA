// GFG - Min & Max in Array
// Difficulty: Easy
// Approach: Linear Traversal + Tracking
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> getMinMax(vector<int>& arr) {

        int minElement = arr[0];
        int maxElement = arr[0];

        // Traverse the array
        for (int i = 1; i < arr.size(); i++) {

            // Update minimum
            if (arr[i] < minElement) {
                minElement = arr[i];
            }

            // Update maximum
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }

        return {minElement, maxElement};
    }
};
