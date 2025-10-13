class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;
        while (i >= 0) {
            // removing the brackets
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            // if the index is negative
            if (i < 0) {
                break;
            }
            // found the word end
            int j = i;
            // finding the word start
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            //extract the word
            string word = s.substr(i + 1, j-i);
            if (!ans.empty()) {
                ans += ' ';
            }
            ans += word;
        }
        return ans;
    }
};