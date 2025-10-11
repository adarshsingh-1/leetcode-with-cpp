class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;

        while (n % 2 == 0) { // keep dividing by 2 while divisible
            n /= 2;
        }

        return n == 1; // if reduced to 1, it's a power of two  
    }

};