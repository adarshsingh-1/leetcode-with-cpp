class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        //total number of subsets
        int total = 1 << n; 
        
        vector<vector<int>> ans;

        for (int mask = 0; mask < total; mask++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                
                if (mask & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }

        return ans;
    }
};