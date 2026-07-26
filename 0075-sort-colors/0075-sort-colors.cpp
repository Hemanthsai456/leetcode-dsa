class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for (int x : nums)
        {
            if(x == 0) zeros ++;
            if(x == 1) ones ++;
            if(x == 2) twos ++;
        }
        
        int i = 0;
        while(zeros --) nums[i++] = 0;
        while(ones --) nums[i++] = 1;
        while(twos --) nums[i++] = 2;
    }
};