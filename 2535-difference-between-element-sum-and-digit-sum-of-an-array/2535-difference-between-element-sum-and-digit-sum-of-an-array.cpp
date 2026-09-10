class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, sumN = 0, digit, sumD = 0, sumOver;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 10) {
                sumN += nums[i];
            } 
            else {
                int n = nums[i];

                while (n > 0) {
                    digit = n % 10;
                    sumD += digit;
                    n /= 10;
                }
            }
        }

        sumOver = sumD + sumN;

        return sum - sumOver;
    }
};