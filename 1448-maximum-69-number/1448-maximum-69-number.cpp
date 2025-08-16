class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans;
        while(num>0){
            int temp = num%10;
            ans.push_back(temp);
            num/=10;
        }

        for(int i = ans.size()-1; i>=0 ; i--){
            if(ans[i] == 6){
                ans[i] = 9;
                break;
            }
        }

        reverse(ans.begin() , ans.end());

        int res;
        for(auto val: ans){
            res = res * 10 + val;
        }

        return res;
        
    }
};