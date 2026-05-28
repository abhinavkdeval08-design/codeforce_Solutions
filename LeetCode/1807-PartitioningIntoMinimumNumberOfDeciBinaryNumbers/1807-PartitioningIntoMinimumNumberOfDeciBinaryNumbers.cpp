// Last updated: 29/05/2026, 00:05:27
class Solution {
public:
    int minPartitions(string n) {
        int ans;
        sort(n.begin(),n.end());
        ans = n[n.length()-1] - '0';
        return ans;
    }
};