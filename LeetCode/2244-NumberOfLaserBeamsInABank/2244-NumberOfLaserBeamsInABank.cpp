// Last updated: 29/05/2026, 00:05:07
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prevCount = 0; 
        for(int i = 0; i < bank.size(); i++) {
            int currentRowCount = 0;
            
            for(char ch : bank[i]) {
                if(ch == '1') currentRowCount++;
            }
            
           
            if(currentRowCount > 0) {
                ans += (prevCount * currentRowCount);
                prevCount = currentRowCount; 
            }
        }
        
        return ans;
    }
};