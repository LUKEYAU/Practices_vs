#include <stdio.h>

feature/sub-op
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    printf("=== C Language Calculator ===\n");

    printf("Addition: 10 + 20 = %d\n", add(10, 20));
    printf("Subtraction: 50 - 30 = %d\n", sub(50, 30));

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("=== C Language Calculator ===\n");
    
    // Operations placeholders
    printf("Addition: 10 + 20 = %d\n", add(10, 20));
    
master
    printf("System Check OK\n");
    return 0;
}