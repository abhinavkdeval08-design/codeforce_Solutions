// Last updated: 29/05/2026, 00:05:01
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int p =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p] = nums[i];
                p+=2;
            }
        }
        int q =1;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<0) {
                ans[q] = nums[i];
                q+=2;
            } }
        return ans;
    }
};