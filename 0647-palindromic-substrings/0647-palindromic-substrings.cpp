class Solution {
public:

    bool isPalindromic(string s){
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                string sub = s.substr(i,j-i+1);
                if(isPalindromic(sub)){
                    count++;
                }
            }
            

        }
        return count;
        
    }
};