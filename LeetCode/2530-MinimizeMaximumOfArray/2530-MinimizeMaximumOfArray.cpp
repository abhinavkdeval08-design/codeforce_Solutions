// Last updated: 29/05/2026, 00:04:44
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long current_sum = 0;
        long long max_val = 0;

        for(int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            long long avg = (current_sum + i) / (i + 1); 
            max_val = max(max_val, avg);
        }
        return max_val;
    }
};