#include <stdio.h>
int main() {
    unsigned int a = 5;  // Binary: 0101
    unsigned int b = 3;  // Binary: 0011

    unsigned int and_result = a & b; // Bitwise AND  
    unsigned int or_result = a | b;  // Bitwise OR
    unsigned int xor_result = a ^ b; // Bitwise XOR
    unsigned int not_result = ~a;     // Bitwise NOT

    printf("Bitwise AND of %u and %u is %u\n", a, b, and_result);
    printf("Bitwise OR of %u and %u is %u\n", a, b, or_result);
    printf("Bitwise XOR of %u and %u is %u\n", a, b, xor_result);
    printf("Bitwise NOT of %u is %u\n", a, not_result);

    return 0;
}