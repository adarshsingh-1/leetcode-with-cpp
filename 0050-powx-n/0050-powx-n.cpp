class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;  // store n in long long to handle overflow
        double ans = 1.0;

    // if power is negative, make it positive for calculation
    if (exp < 0) {
        exp = -exp;
        x = 1 / x;  // reciprocal for negative power
    }

    // fast exponentiation (O(log n))
    while (exp > 0) {
        if (exp % 2 == 1) ans = ans * x;
        x = x * x;
        exp = exp / 2;
    }
    return ans;
        
    }
};