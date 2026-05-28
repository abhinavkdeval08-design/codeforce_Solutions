// Last updated: 29/05/2026, 00:05:33
class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i=0;i<command.length();i++){
            if(command[i] == 'G'){
               ans += 'G';
            }
            else if(command[i] == '('){
            if(command[i+1] == ')'){
                ans += 'o';
                i++;
            }
            else if (command[i+1] == 'a'){
                ans += "al";
                i+=3;
            }
            }
        }
    return ans;
    }
};