class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> possible;
        
        find_subset(nums, 0, ans, possible);

        return ans;
    }

    void find_subset(vector<int> &nums, int after, vector<vector<int>> &ans, vector<int> &possible){
        
        ans.push_back(possible);

        for(int i = after; i < nums.size(); i++){
            possible.push_back(nums[i]);
            find_subset(nums, i+1, ans, possible);
            possible.pop_back();
        }
    }
};