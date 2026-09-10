class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int, int> sn;
        for(int num :nums){
            sn[num]++;
        }
        for(auto value :sn){
            if(value.second ==1){
                return value.first;
            }
        }
        return -1;
    }
};