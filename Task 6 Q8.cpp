#include <stdio.h>

int main() {
    int i, num;
    printf("Enter 10 numbers, and I will show those divisible by 7:\n");
    
    for(i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        
        if(num % 7 == 0) {
            printf("? %d is divisible by 7\n", num);
        }
    }
    
    return 0;
}

