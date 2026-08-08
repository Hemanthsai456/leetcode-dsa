class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v = {'a','e','i','o','u', 'A','E','I','O','U'};
        int low = 0;
        int high = s.length() - 1;
        while (low < high)
        {
            if (find(v.begin(), v.end(), s[low]) != v.end() &&
                find(v.begin(), v.end(), s[high]) != v.end())
            {
                swap(s[low], s[high]);
                low++;
                high--;
            }
            else if (find(v.begin(), v.end(), s[low]) != v.end()) high--;
            else low++;
        }
        return s;
    }
};