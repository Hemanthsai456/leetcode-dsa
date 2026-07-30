class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double arraysum = 0;
        for (int i = 0; i < k; i++)
        {
            arraysum += nums[i];
        }
        double maxSum = arraysum;
        for (int i = k; i < nums.size(); i++)
        {
            arraysum += nums[i];
            arraysum -= nums[i - k];
            maxSum = max(maxSum, arraysum);
        }
        return maxSum / k;
    }
};