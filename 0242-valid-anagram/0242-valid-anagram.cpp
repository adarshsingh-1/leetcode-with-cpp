class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        int n = s.length();

        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        unordered_map<char, int>mp2;
        int m = t.length();

        for(int i = 0;i<m;i++){
            mp2[t[i]]++;
        }
        return mp == mp2;
        
    }
};