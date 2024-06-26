class Solution {
public:
    int reverse(int x) {


        long rev = 0;

         while (x != 0) {
            int pop = x % 10;
            x /= 10;

            rev = rev * 10 + pop;

            if(rev >= INT_MAX)
                return 0;
            if(rev <= INT_MIN)
                return 0;
         }

        return rev;
    }
};