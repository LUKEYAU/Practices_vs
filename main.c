#include <stdio.h>

int sub(int a, int b) {
    return a - b;
}

int main() {
    printf("=== C Language Calculator ===\n");

    // Operations placeholders
    printf("Subtraction: 50 - 30 = %d\n", sub(50, 30));

    printf("System Check OK\n");
    return 0;
}