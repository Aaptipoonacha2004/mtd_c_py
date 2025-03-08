#include <stdio.h>
#include <string.h>

int main() {
    char input_number[20];

    puts("Enter a number to calculate sum of even digits at odd positions: ");
    scanf("%s", input_number);

    int sum_even_digits = 0;
    int total_digits = strlen(input_number);

    for (int position = 0; position < total_digits; position += 2) {
        int current_digit = input_number[position] - '0';
        if (current_digit % 2 == 0) {
            sum_even_digits += current_digit;
        }
    }

    printf("Sum of even digits at odd positions: %d\n", sum_even_digits);

    return 0;
}
