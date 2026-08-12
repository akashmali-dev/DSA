// GFG - Reverse an Array
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            swap(arr[left], arr[right]);

            left++;
            right--;
        }
    }
};
