class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long col = 0;
        for (char ch : columnTitle)
        {
            col = col * 26 + (ch - 'A' + 1);
        }
        return (int)col;
    }
};