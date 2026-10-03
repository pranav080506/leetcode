class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<int> values;
        for(auto &it:mp){
            values.push_back(it.first);
        }
        sort(values.begin(),values.end());
        vector<int> ans;
        while(ans.size()<nums.size()){
            for(int x:values){
                if(mp[x]>0){
                    ans.push_back(x);
                    mp[x]--;
                }
            }
        }
        return ans;
    }
};