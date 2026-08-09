class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        int m=nums.size()-1;
        for(int i=nums[0];i<=nums[m];i++){
            bool found= false;
            for(int j=0;j<nums.size();j++){
                if(nums[j]== i){
                    found=true;
                    break;
                }
            }
            if(!found){
                result.push_back(i);
            }
        }
        return result;
    }
};