#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int findNextBiggerNumber(char inputNumber[]) {
    int length = strlen(inputNumber);
    int i, j;

    // Step 1: Find the rightmost digit which is smaller than its next digit
    for (i = length - 2; i >= 0; i--) {
        if (inputNumber[i] < inputNumber[i + 1]) {
            break;
        }
    }

    // If no such digit is found, that means it's the largest permutation
    if (i == -1) {
        return 0;
    }

    // Step 2: Find the smallest digit to the right of inputNumber[i] but larger than inputNumber[i]
    for (j = length - 1; j > i; j--) {
        if (inputNumber[j] > inputNumber[i]) {
            break;
        }
    }

    // Step 3: Swap the digits
    swap(&inputNumber[i], &inputNumber[j]);

    // Step 4: Sort the digits after the swapped position in ascending order
    qsort(inputNumber + i + 1, length - i - 1, sizeof(char), (int (*)(const void *, const void *))strcmp);

    return 1;
}

int main() {
    char inputNumber[20];

    // Input from user
    printf("Enter a number: ");
    scanf("%s", inputNumber);

    // Find and print the next bigger number
    if (findNextBiggerNumber(inputNumber)) {
        printf("Next bigger number: %s\n", inputNumber);
    } else {
        printf("No bigger number possible with the same digits.\n");
    }

    return 0;
}
