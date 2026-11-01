class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;

        for (int i = 0; i < nums.size(); i += 2) {
            int multiplier = 10;
            int temp = nums[i + 1];

            while (temp >= 10) {
                multiplier *= 10;
                temp /= 10;
            }

            int merged = nums[i] * multiplier + nums[i + 1];

            mini = min(mini, merged);
        }

        return mini;
    }
};