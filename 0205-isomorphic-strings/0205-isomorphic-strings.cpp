class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(m!=n){
            return false;
        }
        unordered_map<char, char> mapST; // s → t mapping
        unordered_map<char, char> mapTS; // t → s mapping
        for (int i = 0; i < m; i++) {
            char c1 = s[i];
            char c2 = t[i];

            // if s[i] was seen before, ensure it maps to same t[i]
            if (mapST.count(c1) && mapST[c1] != c2) {
                return false;
            }

            // if t[i] was seen before, ensure it maps to same s[i]
            if (mapTS.count(c2) && mapTS[c2] != c1) {
                return false;
            }

            // store new mapping
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }
        return true;
    }
        
        
    
};