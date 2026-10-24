
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j;
        int n = nums.size();
        int target = 0;

        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (nums[i] > nums[j]) {
                    target = nums[i];
                    nums[i] = nums[j];
                    nums[j] = target;
                }
            }
        }
    }
};
