// Last updated: 29/05/2026, 00:04:25
class Solution {
private:
    int getMaxDigit(int n) {
        int maxD = 0;
        while (n > 0) {
            maxD = max(maxD, n % 10);
            n /= 10;
        }
        return maxD;
    }

public:
    int maxSum(vector<int>& nums) {
        int ans = -1; 
        vector<int> max_val(10, 0);
        
        for (int i = 0; i < nums.size(); i++) {
            int currentNum = nums[i];
            int maxDigit = getMaxDigit(currentNum); 
            if (max_val[maxDigit] > 0) {
               
                ans = max(ans, max_val[maxDigit] + currentNum);
            }
            max_val[maxDigit] = max(max_val[maxDigit], currentNum);
        }
        
        return ans;
    }
};