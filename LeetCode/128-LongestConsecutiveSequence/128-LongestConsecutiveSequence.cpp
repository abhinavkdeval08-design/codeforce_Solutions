// Last updated: 29/05/2026, 00:06:41
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int count =1;
        int count2 =1;
        for(int i=1;i<nums.size();i++){
            if (nums[i] == nums[i-1]) continue;
            if(nums[i] == (nums[i-1]+1)){
                count++;
            }
            else {
                count2 = max(count, count2);
                count = 1; 
            }
        }
        return max(count,count2);
    }
};