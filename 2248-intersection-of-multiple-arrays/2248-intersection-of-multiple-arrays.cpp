
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;

        sort(nums[0].begin(), nums[0].end());

        for (int num : nums[0]) {
            bool found = true;

            for (int i = 1; i < nums.size(); i++) {
                if (find(nums[i].begin(), nums[i].end(), num)
                    == nums[i].end()) {
                    found = false;
                    break;
                }
            }

            if (found) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};