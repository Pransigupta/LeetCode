class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long d = abs((long long)dividend);
        long long div = abs((long long)divisor);

        long long quotient = 0;

        while (d >= div) {

            long long temp = div;
            long long count = 1;

            while (d >= temp + temp) {
                temp += temp;
                count += count;
            }

            d -= temp;
            quotient += count;
        }

        if ((dividend < 0) != (divisor < 0))
            quotient = -quotient;

        return (int)quotient;
    }
};