class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n; 
        double ans = 1.0;

        
        if (exp < 0) {
            exp = -exp;
            x = 1 / x;  
        }

        
        while (exp > 0) {
            if (exp % 2 == 1) ans = ans * x;
            x = x * x;
            exp = exp / 2;
        }
        return ans;
        
    }
};