#include <stdio.h>

// Function to calculate factorial using recursion
long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}
