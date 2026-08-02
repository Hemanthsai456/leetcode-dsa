class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long strength = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for  (int j = i+1; j<n; j++)
            {
                long long g = gcd(nums[i], nums[j]);
                long long s = (1LL * nums[i] * nums[j])/(g*g);
                strength = max(s, strength);
            }
        }
        return strength;
    }
};