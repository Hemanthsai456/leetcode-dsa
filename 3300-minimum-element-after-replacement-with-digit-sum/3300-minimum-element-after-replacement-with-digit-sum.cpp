class Solution {
public:
    int minElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            int r = 0;
            int temp = nums[i];
            while(temp > 0)
            {
                r = r + (temp%10);
                temp = temp/10;
            }
            nums[i] = r;
        }
        return *min_element(nums.begin(), nums.end());
    }
};