class Solution {
public:
    int countMonobit(int n) {
        int count = 1;  

        long long x = 1;

        while (x <= n) {
            count++;
            x = x * 2 + 1;
        }

        return count;
    }
};