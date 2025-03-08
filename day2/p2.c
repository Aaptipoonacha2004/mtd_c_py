#include <stdio.h>

int main() {
    int input_number;

    puts("Enter a number to perform multiplication table: ");
    scanf("%d", &input_number);

    printf("\nMultiplication Table for %d:\n", input_number);

    for (int multiplier = 1; multiplier <= 10; multiplier++) {
        printf("%02d x %02d = %03d\n", input_number, multiplier, input_number * multiplier);
    }

    return 0;
}
