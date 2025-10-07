#include <stdio.h>

int main() {
    int i, num, choice;
    long long factorial; 

    while (1) {
        printf("Enter 1 to calculate factorial or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter number: ");
            scanf("%d", &num);

            if (num < 0) {
                printf("\nError: No factorial for negative numbers!\n\n");
                continue; 
            }

            factorial = 1;
            for (i = 1; i <= num; i++) {
                factorial *= i;
            }

            printf("\n%d! = %lld\n\n", num, factorial);
        } 
        else if (choice == 0) {
            printf("\nExiting program... Goodbye!\n");
            break; 
        } 
        else {
            printf("\nInvalid choice! Please enter 1 or 0.\n\n");
        }
    }

    return 0;
}

