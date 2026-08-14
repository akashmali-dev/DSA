// GFG - Alternate Positive Negative
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    void rearrange(vector<int>& arr) {
        vector<int> positive;
        vector<int> negative;

        // Separate positive and negative elements
        for (int x : arr) {
            if (x >= 0)
                positive.push_back(x);
            else
                negative.push_back(x);
        }

        int p = 0;
        int n = 0;
        int i = 0;

        // Place positive and negative alternately
        while (p < positive.size() && n < negative.size()) {

            arr[i++] = positive[p++];
            arr[i++] = negative[n++];
        }

        // Put remaining positive elements
        while (p < positive.size()) {
            arr[i++] = positive[p++];
        }

        // Put remaining negative elements
        while (n < negative.size()) {
            arr[i++] = negative[n++];
        }
    }
};
