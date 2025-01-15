class Solution {
public:
    int minimizeXor(int num1, int num2) {
        // Count the number of set bits in num2
        int set_bits_count = __builtin_popcount(num2);

        // Resulting integer x
        int x = 0;

        // First, try to use the bits in num1
        for (int i = 31; i >= 0 && set_bits_count > 0; --i) {
            if (num1 & (1 << i)) { // If the i-th bit in num1 is set
                x |= (1 << i);    // Set the same bit in x
                --set_bits_count; // Reduce the number of set bits needed
            }
        }

        // If more set bits are needed, fill them from the least significant bits
        for (int i = 0; i <= 31 && set_bits_count > 0; ++i) {
            if (!(x & (1 << i))) { // If the i-th bit in x is not set
                x |= (1 << i);     // Set the bit in x
                --set_bits_count;  // Reduce the number of set bits needed
            }
        }

        return x;
    }
};
