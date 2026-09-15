class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0,x=0;
        for(int i=0;i<accounts.size();i++){
            int n=accounts[i].size();
            int maxi=0;
            for(int j=0;j<n;j++){
                maxi += accounts[i][j];
            }
            rich=max(rich,maxi);
        }
        return rich;
    }
};