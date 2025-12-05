#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("=== C Language Calculator ===\n");
    
    // Operations placeholders
    printf("Addition: 10 + 20 = %d\n", add(10, 20));
    
    printf("System Check OK\n");
    return 0;
}