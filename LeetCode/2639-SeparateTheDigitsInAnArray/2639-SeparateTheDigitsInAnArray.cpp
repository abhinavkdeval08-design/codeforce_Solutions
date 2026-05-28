// Last updated: 29/05/2026, 00:04:39
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i =0; i<nums.size();i++){
            string s = to_string(nums[i]);
        for(int j = 0; j<s.length();j++){
            ans.push_back(s[j]-'0');
        }    }
    return ans;
    }
};