/* Description */

#include <stdio.h>
#include <stdlib.h>
#include "Binary_Operations.h"


int main() {

    uint32_t x = 0x0000000F;
    printf("Initial Value: 0x%08X\n", x);

    uint32_t left_shift_result = BINARY_LEFT_SHIFT(x, 4);
    printf("Left Shift Result: 0x%08X\n", left_shift_result);
    uint32_t right_shift_result = BINARY_BASIC_RIGHT_SHIFT(x, 2);
    printf("Right Shift Result: 0x%08X\n", right_shift_result);

    uint32_t and_result = BINARY_AND(x, 0x000000F0);
    printf("AND Result: 0x%08X\n", and_result);
    uint32_t or_result = BINARY_OR(x, 0x000000F0);
    printf("OR Result: 0x%08X\n", or_result);
    uint32_t xor_result = BINARY_XOR(x, 0x000000FF);
    printf("XOR Result: 0x%08X\n", xor_result);
    uint32_t not_result = BINARY_NOT(x);
    printf("NOT Result: 0x%08X\n", not_result);

    uint32_t clear_bit_result = BINARY_CLEAR_BIT(x, 2);
    printf("Clear Bit Result: 0x%08X\n", clear_bit_result);
    uint32_t set_bit_result = BINARY_SET_BIT(x, 8);
    printf("Set Bit Result: 0x%08X\n", set_bit_result);

    return 0;
}