class Solution {
public:
    int largestInteger(int n, int s) {

        if (s == 0) {
            return 0;
        }

        int answer = 0;

        for (int i = 0; i < n; i++) {
            int digit = min(9, s);
            answer = answer * 10 + digit;
            s = s - digit;
        }

        if (s > 0) {
            return -1;
        }

        return answer;
    }
};