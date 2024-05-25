class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char, int> m1;
        int length = 0;
        int maxLength = 0;
        int stringLength = s.length();

        int start = 0, startcopy = 0;

        for(int i = 0; i < stringLength; i++)
        {
            if(maxLength > stringLength - i + length)
                break;

            m1[ s[i] ]++;
            length++;
            

            if( m1[ s[i] ] > 1){

                do{
                    m1[ s[startcopy] ]--;
                }while(s[startcopy++] != s[i]);

                length -= (startcopy-start);

                start = startcopy;
            }
            
            maxLength = max(maxLength, length);
        }

        return maxLength;
    }
};