// Last updated: 29/05/2026, 00:05:37
class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](auto &a, auto &b){
            return (a[0]-a[1])<(b[0]-b[1]);
        });
        int ener =0;
        int curr = 0;
        for(int i=0; i<tasks.size();i++){
            int actual = tasks[i][0];
            int minimum = tasks[i][1];
            if(curr < minimum){
                ener += minimum - curr;
                curr = minimum;
            }
            curr -= actual; 
        }
        return ener;
    }
};