#include <stdio.h>

int main() {
    int inputNumber, sumOfDigits;


    puts("Enter a number to calculate the sum of its digits until a single digit is reached: ");
    scanf("%d", &inputNumber);

  
        sumOfDigits = 0;
      
        while (inputNumber > 0) {
            sumOfDigits += inputNumber % 10;  
            inputNumber /= 10;
        

            while (inputNumber > 0)
            {
                if (sumOfDigits > 9)
                {
                    inputNumber = sumOfDigits;
                    sumOfDigits = 0;
                    continue;

                }
            }
        }
        
        
        inputNumber = sumOfDigits;
    

    printf("The final single-digit sum is: %d \n", inputNumber);

    return 0;
}

