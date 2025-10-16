class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size();

        for(int i = 1;i<n;i++){
                string current = strs[i];
                int j = 0;
            

            while (j < prefix.length() && j < current.length() && prefix[j] == current[j]) {
                j++;
            }

            // trim prefix to matched part
            prefix = prefix.substr(0, j);

            // stop early if prefix becomes empty
            if (prefix.empty()) return "";
        }


        return prefix;
    
        
    }
};