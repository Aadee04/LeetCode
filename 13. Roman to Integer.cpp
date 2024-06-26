class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int size = s.length();

        for(int i = 0; i < size; i++) {
            if(s[i] == 'I') {
                num += 1;
            } else if(s[i] == 'V') {
                if(i > 0 && s[i-1] == 'I') {
                    num += 3; 
                } else {
                    num += 5;
                }
            } else if(s[i] == 'X') {
                if(i > 0 && s[i-1] == 'I') {
                    num += 8; 
                } else {
                    num += 10;
                }
            } else if(s[i] == 'L') {
                if(i > 0 && s[i-1] == 'X') {
                    num += 30; 
                } else {
                    num += 50;
                }
            } else if(s[i] == 'C') {
                if(i > 0 && s[i-1] == 'X') {
                    num += 80; 
                } else {
                    num += 100;
                }
            } else if(s[i] == 'D') {
                if(i > 0 && s[i-1] == 'C') {
                    num += 300;
                } else {
                    num += 500;
                }
            } else if(s[i] == 'M') {
                if(i > 0 && s[i-1] == 'C') {
                    num += 800; 
                } else {
                    num += 1000;
                }
            }
        }

        return num;
    }
};
