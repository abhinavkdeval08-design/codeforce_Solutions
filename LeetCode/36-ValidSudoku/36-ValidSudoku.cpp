// Last updated: 29/05/2026, 00:07:02
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowCheck[9][9] = {0};
        int colCheck[9][9] = {0};
        int boxCheck[9][9] = {0};
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                int num = board[i][j] - '1'; 
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (rowCheck[i][num] == 1 || colCheck[j][num] == 1 || boxCheck[boxIndex][num] == 1) {
                    return false;
                }
                
                rowCheck[i][num] = 1;
                colCheck[j][num] = 1;
                boxCheck[boxIndex][num] = 1;
            }
        }
        
        return true; 
    }
};