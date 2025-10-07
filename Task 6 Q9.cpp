#include <stdio.h>

int main() {
    int n, i, j, space, stars;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

