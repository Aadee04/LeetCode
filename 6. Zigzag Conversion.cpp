class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) 
            return s;

        string zigzag;
        int size = s.length();

        for(int i = 0; i < numRows; i++){
            bool overstep = true;
            int step1 = 2*(numRows - i - 1), step = step1;
            int step2 = 2*(i);

            for(int j = i; j < size; j += step){
                zigzag += s[j];

                if(i == 0 || i == numRows - 1){
                    step = 2*(numRows - 1);
                    continue;
                }

                if(overstep){
                    step = step1;
                    overstep = !overstep;
                }
                else{
                    step = step2;
                    overstep = !overstep;
                }
            }
        }

        return zigzag;
    }
};