class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int cols=accounts[0].size();
        
        int maxi=INT_MIN;
        for(int i=0;i<rows;i++){
            int sum=0;
            for(int j=0;j<cols;j++){
            sum+=accounts[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};