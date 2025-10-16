class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //taking the first element as answer and then comparing it to next strings
        string prefix = strs[0];
        int n = strs.size();

        for(int i = 1;i<n;i++){
                string current = strs[i];
                int j = 0;
            
            //checking if the pointer is less than both prefix and current string and increasing the counter to calculate the length of the common 
            while (j < prefix.length() && j < current.length() && prefix[j] == current[j]) {
                j++;
            }

            // trim prefix to matched part
            prefix = prefix.substr(0, j);

            if (prefix.empty()) return "";
        }


        return prefix;
    
        
    }
};