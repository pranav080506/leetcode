class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int, int> mp;

        // Count only even numbers
        for (int num : nums) {
            if (num % 2 == 0) {
                mp[num]++;
            }
        }

        int ans = -1;
        int maxCount = 0;

        // Find most frequent even number
        for (auto it : mp) {
            if (it.second > maxCount) {
                maxCount = it.second;
                ans = it.first;
            }
            else if (it.second == maxCount && it.first < ans) {
                ans = it.first;
            }
        }

        return ans;
    }
};