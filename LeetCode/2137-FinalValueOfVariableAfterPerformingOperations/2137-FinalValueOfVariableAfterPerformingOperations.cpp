// Last updated: 29/05/2026, 00:05:10
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]== "++X" || operations[i]== "X++"){
                 n++;    
            }
           
            else if(operations[i]== "--X" || operations[i]== "X--"){
              n--;
            }
        }
        return n;
    }
};