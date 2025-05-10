#include <stdio.h>

int main() {
    int num, count = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to count digits
    for (; num != 0; num /= 10) {
        count++;
    }

    // Output result
    printf("Number of digits: %d\n", count);

    return 0;
}
