class Solution {
public:
    bool checkGoodInteger(int n) {
        int squaresum = 0;
        int digitsum = 0;

        while (n > 0) {
            int digit = n % 10;

            digitsum += digit;
            squaresum += digit * digit;

            n = n / 10;
        }

        if (squaresum - digitsum >= 50) {
            return true;
        }

        return false;
    }
};