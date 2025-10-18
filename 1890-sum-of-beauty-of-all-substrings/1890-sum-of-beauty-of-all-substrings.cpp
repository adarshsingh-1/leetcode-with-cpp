class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int count = 0;

        for(int i = 0;i<n;i++){
            unordered_map<char, int> mp;
            for(int j = i;j<n;j++){
                mp[s[j]]++;

                int maxF = 0, minF = INT_MAX;

                for(auto it: mp){
                    maxF = max(maxF, it.second);
                    minF = min(minF, it.second);
                }

                count+=(maxF-minF);
            }
        }
        return count;
        
    }
};