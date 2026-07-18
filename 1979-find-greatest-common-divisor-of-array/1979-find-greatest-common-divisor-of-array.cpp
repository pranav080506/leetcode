class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int ans=1;
        for(int i=1;i<=mn;i++){
            if(mn%i==0 && mx%i==0)
            ans=i;
        }
        return ans;
    }
};