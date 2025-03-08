#include <stdio.h>

float calculateTax(float annualIncome) {
    float taxAmount = 0;

    if (annualIncome <= 250000) {
        taxAmount = 0;
    } else if (annualIncome <= 500000) {
        taxAmount = (annualIncome - 250000) * 0.05;
    } else if (annualIncome <= 1000000) {
        taxAmount = (250000 * 0.05) + (annualIncome - 500000) * 0.20;
    } else {
        taxAmount = (250000 * 0.05) + (500000 * 0.20) + (annualIncome - 1000000) * 0.30;
    }

    return taxAmount;
}

int main() {
    float inputIncome, calculatedTax;

    // Input from user
    printf("Enter your annual income: ");
    scanf("%f", &inputIncome);

    // Calculate tax
    calculatedTax = calculateTax(inputIncome);

    // Display tax amount
    printf("Your total tax amount is: %.2f\n", calculatedTax);

    return 0;
}
