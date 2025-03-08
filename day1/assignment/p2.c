#include <stdio.h>

int main() {
    float input_marks;

    puts("Enter a number to perform grade calculation: ");
    scanf("%f", &input_marks);

    if (input_marks >= 0 && input_marks < 50) {
        puts("Result: Fail");
    } else if (input_marks >= 50 && input_marks <= 70) {
        puts("Result: Second Class");
    } else if (input_marks >= 71 && input_marks <= 90) {
        puts("Result: First Class");
    } else if (input_marks >= 91 && input_marks <= 100) {
        puts("Result: Distinction");
    } else {
        puts("Invalid score! Please enter marks between 0 and 100.");
    }

    return 0;
}
