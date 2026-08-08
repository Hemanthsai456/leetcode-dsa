class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int low = 0;
        int high = s.length() - 1;
        while (low < high)
        {
            while (low < high && !isVowel(s[low]))
                low++;
            while (low < high && !isVowel(s[high]))
                high--;
            if (low < high)
                swap(s[low], s[high]);
            low++;
            high--;
        }
        return s;
    }
};