class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs[0].length(), count = strs.size();
        string prefix = "";

        for(int i = 0; i < size; i++){
            char ch = strs[0][i];

            for(int j = 0; j < count; j++){

                if(strs[j][i] != ch)
                    return prefix;
            }

            prefix += ch;
        }

        return prefix;
    }
};