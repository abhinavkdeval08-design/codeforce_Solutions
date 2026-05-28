// Last updated: 29/05/2026, 00:06:01
class Solution {
public:
    string defangIPaddr(string address) {
    string ans = "";
    for(int i=0;i<address.length(); i++){
    if(address[i] == '.'){
    ans += "[.]";
        }
    else{
        ans += address[i];
    } }
    return ans;
    }
};