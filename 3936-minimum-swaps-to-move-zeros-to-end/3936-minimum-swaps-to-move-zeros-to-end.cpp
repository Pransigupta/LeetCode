class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int ans = 0;
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            if (nums[i] != 0) {
                i++;
            }
            else if (nums[j] == 0) {
                j--;
            }
            else {
                swap(nums[i], nums[j]);
                ans++;
                i++;
                j--;
            }
        }

        return ans;
    }
};