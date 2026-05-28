// Last updated: 29/05/2026, 00:06:00
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int ans=0;
        for(int i=0; i<s.length();i++){
            if(s[i] == 'R'){
                count++;
            }
            else if(s[i] == 'L'){
                count--;
            }
        if(count == 0){
            ans++;
        }
        }
        
        return ans;
    }
};