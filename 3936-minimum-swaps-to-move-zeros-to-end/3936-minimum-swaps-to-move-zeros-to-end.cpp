class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;

        while (i < j) {

          
            while (i < j && nums[i] != 0)
                i++;

           
            while (i < j && nums[j] == 0)
                j--;

            if (i < j) {
                swap(nums[i], nums[j]);
                ans++;
                i++;
                j--;
            }
        }

        return ans;
    }
};