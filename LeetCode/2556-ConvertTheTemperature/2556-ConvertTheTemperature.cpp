// Last updated: 29/05/2026, 00:04:41
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
    vector<double> temp(2);
    temp[0] = celsius + 273.15;
    temp[1] = celsius * 1.80 + 32.00;
    return temp;
    }
};