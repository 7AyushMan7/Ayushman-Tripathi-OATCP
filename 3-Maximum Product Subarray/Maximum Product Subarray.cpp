class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long maxProductForward = INT_MIN; // Maximum product encountered moving forward
        long long productForward = 1;          // Current product moving forward
        long long maxProductBackward = INT_MIN;// Maximum product encountered moving backward
        long long productBackward = 1;         // Current product moving backward

        int n = nums.size(); // Size of the input vector

        // Traverse the array from left to right
        for(int i = 0; i < n; i++) {
            productForward *= nums[i];                 // Update current product moving forward
            maxProductForward = max(maxProductForward, productForward); // Update maximum product moving forward
            if(productForward == 0) productForward = 1; // Reset product if encounter 0
        }

        productBackward = 1; // Reset product for backward traversal

        // Traverse the array from right to left
        for(int i = n - 1; i >= 0; i--) {
            productBackward *= nums[i];                // Update current product moving backward
            maxProductBackward = max(maxProductBackward, productBackward); // Update maximum product moving backward
            if(productBackward == 0) productBackward = 1; // Reset product if encounter 0
        }

        long long finalMaxProduct = max(maxProductForward, maxProductBackward); // Get maximum product from both directions
        return finalMaxProduct; // Return the maximum product
    }
};
