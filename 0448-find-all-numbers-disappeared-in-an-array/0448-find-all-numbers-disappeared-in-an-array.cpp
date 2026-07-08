class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> ans;
        int expected = 1;

        for (int i = 0; i < nums.size(); i++) {

            while (expected < nums[i]) {
                ans.push_back(expected);
                expected++;
            }

            if (expected == nums[i]) {
                expected++;
            }
        }

        while (expected <= nums.size()) {
            ans.push_back(expected);
            expected++;
        }

        return ans;
    }
};