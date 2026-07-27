class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[m-1]-1) * (nums[m-2]-1);
    }
};