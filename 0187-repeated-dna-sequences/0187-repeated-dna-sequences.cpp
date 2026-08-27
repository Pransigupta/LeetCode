class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> v;
        vector<string> ans;

        for(int i = 0; i + 10 <= s.size(); i++) {
            v.push_back(s.substr(i, 10));
        }

        sort(v.begin(), v.end());

        for(int i = 1; i < v.size(); i++) {
            if(v[i] == v[i - 1]) {
                if(ans.empty() || ans.back() != v[i]) {
                    ans.push_back(v[i]);
                }
            }
        }

        return ans;
    }
};