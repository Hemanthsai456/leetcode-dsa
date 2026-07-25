class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while (n > 0)
        {
            int r = n % 10;
            n = n / 10;
            arr.push_back(r);
        }
        int max1 = 0;
        int max2 = 0;
        for (int num : arr)
        {
            if (num >= max1)
            {
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max2 = num;
            }
        }
        return max1 * max2;
    }
};