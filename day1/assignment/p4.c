#include <stdio.h>

int main() {
    int input_number;

    puts("Enter a number to find second smallest digit: ");
    scanf("%d", &input_number);

    int extracted_digit;
    int smallest_digit = 10, second_smallest_digit = 10;

    while (input_number > 0) {
        extracted_digit = input_number % 10;
        input_number /= 10;

        if (extracted_digit < smallest_digit) {
            second_smallest_digit = smallest_digit;
            smallest_digit = extracted_digit;
        } else if (extracted_digit > smallest_digit && extracted_digit < second_smallest_digit) {
            second_smallest_digit = extracted_digit;
        }
    }

    if (second_smallest_digit == 10) {
        puts("No second smallest digit found.");
    } else {
        printf("The second smallest digit is: %d\n", second_smallest_digit);
    }

    return 0;
}
