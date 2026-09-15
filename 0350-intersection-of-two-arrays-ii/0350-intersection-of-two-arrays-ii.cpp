
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        vector<bool> used(nums2.size(), false);

        for (int i = 0; i < nums1.size(); i++) {

            for (int j = 0; j < nums2.size(); j++) {

                if ((nums1[i] ^ nums2[j]) == 0 && used[j] == false) {

                    bool found = false;

                    for (int k = 0; k < ans.size(); k++) {
                        if ((ans[k] ^ nums1[i]) == 0) {
                            found = true;
                            break;
                        }
                    }

                    ans.push_back(nums1[i]);
                    used[j] = true;
                    break;
                }
            }
        }

        return ans;
    }
};


