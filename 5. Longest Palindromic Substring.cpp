class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int strSize = s.length();
        int start = 0, maxLength = 1;

        for (int i = 0; i < strSize; ++i) {
            int len1 = palindromeCheck(s, i, i); 
            int len2 = palindromeCheck(s, i, i + 1); 
            int len = max(len1, len2);
            if (len > maxLength) {
                maxLength = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }

    int palindromeCheck(const string &s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1; 
    }
};
