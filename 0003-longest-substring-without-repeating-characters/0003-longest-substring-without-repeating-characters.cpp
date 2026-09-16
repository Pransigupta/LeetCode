class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int n = 0;
        int ans = 0;

        for (int i= 0; i < s.length(); i++) {

            while (st.find(s[i]) != st.end()) {
                st.erase(s[n]);
                n++;
            }

            st.insert(s[i]);

            ans = max(ans, i - n + 1);
        }

        return ans;
    }
};