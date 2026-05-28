// Last updated: 29/05/2026, 00:04:48
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int count1 = __builtin_popcount(num1);
        int count2 = __builtin_popcount(num2);
        
        int x = num1; 
        
        if (count1 > count2) {
            int remove_count = count1 - count2;
            
            for (int i = 0; i < 32 && remove_count > 0; i++) {
                if (x & (1 << i)) { 
                    x = x & ~(1 << i); // Bit unset
                    remove_count--;
                }
            }
        }
        else if (count1 < count2) {
            int add_count = count2 - count1;
            
            for (int i = 0; i < 32 && add_count > 0; i++) {
                if (!(x & (1 << i))) { 
                    x = x | (1 << i); // Bit set
                    add_count--;
                }
            }
        }
        
        return x;
    }
};