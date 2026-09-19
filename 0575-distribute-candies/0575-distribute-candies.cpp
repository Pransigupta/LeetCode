class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n= candyType.size();
      set <int>s;
      for(int x:candyType){
        s.insert(x);
      }
      return min((int)s.size(),n/2);

        }
    
};