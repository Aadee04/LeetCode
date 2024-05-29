class Solution {
public:
    int myAtoi(string s) {
        long num = 0;
        bool encountered = false, sign = false;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && !encountered) {
                continue;
            }

            if(s[i] == '-' && !encountered){
                sign = true;
                encountered = true;
            } 
            else if(s[i] == '+' && !encountered) {
                encountered = true;
            }
            else if(isdigit(s[i])){
                num = num * 10 + int(s[i] - '0');
                encountered = true;

                if(num > INT_MAX) {
                    return sign ? INT_MIN : INT_MAX;
                }
            }
            else {
                break;
            }
        }

        if(sign) {
            num = -num;
        }

        return num;
    }
};
