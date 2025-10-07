#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 0) {
        printf("\nError: Please enter a positive number.\n");
        return 0;
    }

    
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }


    if (sum == num) {
        printf("\n%d is a perfect number.\n", num);
    } else {
        printf("\n%d is not a perfect number.\n", num);
    }

    return 0;
}

