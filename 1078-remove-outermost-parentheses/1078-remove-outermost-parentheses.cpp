class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int var = 0;
        string ans;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if (var > 0) {
                    // var++;
                    ans += s[i];
                }
                var++;
            } else {
                var--;
                if (var > 0) {
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};