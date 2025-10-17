class Solution {
public:

    static bool cmp(pair<char, int>&p1, pair<char, int>&p2){
        return p1.second > p2.second;
    }
    string frequencySort(string s) {
        int n = s.length();
        //creating a map to store all the alphabets 
        unordered_map<char, int> mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }

        //making the pair [(e,2),(t,1),(r,1)]
        vector<pair<char, int>>freq;
        for(auto it : mp){
            freq.push_back({it.first, it.second});
        }
        
        //sorting 
        sort(freq.begin(), freq.end(), cmp);

        //building the final sorted string
        string ans;
        for(auto &p: freq){
            ans.append(p.second, p.first);
        }
        return ans;
    }
};