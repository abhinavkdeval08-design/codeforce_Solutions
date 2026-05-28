// Last updated: 29/05/2026, 00:07:12
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int left =0;
        int right =0;
        int max_leng =0;
            while(right < s.length()){
                if(mp.find(s[right]) == mp.end()) {
                    mp.insert(s[right]);
                    max_leng = max(max_leng, right-left+1);
                    right++;
                }
                else if(mp.find(s[left]) != mp.end()) {
                    mp.erase(s[left]);
                    left++;
                }
            }
        return max_leng;
    }
};