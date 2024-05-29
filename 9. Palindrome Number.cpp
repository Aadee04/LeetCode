class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;

        unsigned int rev = 0;
        for(int s = x; s > 0; s/=10){
            rev = rev * 10 + s%10;

            if(rev >= INT_MAX)
                return false;
        }

        if(rev == x)
            return true;
        else
            return false;
    }
};