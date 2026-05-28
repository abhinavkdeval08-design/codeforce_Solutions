// Last updated: 29/05/2026, 00:04:52
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int garpicktime =0;
        int lastG =-1;
        int lastP =-1;
        int lastM =-1;
        for(int i=0;i<garbage.size();i++){
            garpicktime +=garbage[i].length();
            string house_garbage = garbage[i]; 
            for(char ch : house_garbage) {
                if (ch == 'G') lastG = i;
                if (ch == 'P') lastP = i;
                if (ch == 'M') lastM = i;
            }
            }
        for(int i=0;i<travel.size();i++){
             if(i<lastG){
               garpicktime += travel[i];
                }
                if(i<lastP){
               garpicktime += travel[i];
                }
                if(i<lastM){
               garpicktime += travel[i];
                }
            }
        
        return garpicktime;
    }
};