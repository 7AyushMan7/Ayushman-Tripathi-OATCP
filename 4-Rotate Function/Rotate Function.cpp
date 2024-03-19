class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sumOfElements = 0;      // Sum of all elements in the array
        long long originalFunction = 0;   // Initial value of the rotated function
        int n = nums.size();              // Size of the input vector
        
        // Calculate sum of all elements and initial value of the rotated function
        for(int i = 0; i < n; i++) {
            sumOfElements += nums[i];
            originalFunction += i * nums[i];
        }
        
        long long maximumFunctionValue = originalFunction; // Maximum value of the rotated function
        
        // Iterate through the array to simulate rotations
        for(int i = n - 1; i >= 0; i--) {
            originalFunction += sumOfElements - (nums[i] * n); // Update value of the rotated function
            maximumFunctionValue = max(originalFunction, maximumFunctionValue); // Update maximum function value
        }
        
        return maximumFunctionValue; // Return the maximum value of the rotated function
    }
};
