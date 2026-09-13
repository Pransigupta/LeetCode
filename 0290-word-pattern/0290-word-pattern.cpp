class Solution {
public:
    bool wordPattern(string pattern, string s) {

        stringstream ss(s);
        string word;

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;

        for(int i = 0; i < pattern.length(); i++) {

            if(!(ss >> word)) {
                return false;
            }

            char ch = pattern[i];

            if(mp.count(ch) && mp[ch] != word) {
                return false;
            }

            if(rev.count(word) && rev[word] != ch) {
                return false;
            }

            mp[ch] = word;
            rev[word] = ch;
        }

        if(ss >> word) {
            return false;
        }

        return true;
    }
};