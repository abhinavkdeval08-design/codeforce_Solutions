// Last updated: 29/05/2026, 00:05:25
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i =0;
        int n1=word1.length();
        int n2=word2.length();
        string ans = "";
        
            while(i<n1 || i<n2){
            if(i<n1){
                ans +=word1[i];}
            if(i<n2){
                ans+=word2[i];   
            }
            i++;
            }
        return ans;
    } 
};