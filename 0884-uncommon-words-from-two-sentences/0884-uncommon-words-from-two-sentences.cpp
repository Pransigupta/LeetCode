class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> sp;
        string word;

        
        stringstream ss1(s1);

        while (ss1 >> word) {
            sp[word]++;
        }

    
        stringstream ss2(s2);

        while (ss2 >> word) {
            sp[word]++;
        }

        
        vector<string> ans;

        for (auto x : sp) {
            if (x.second == 1) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};