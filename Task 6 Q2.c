#include <stdio.h>

int main() {
	
	int i, num1, num2, choice, result=0, remain, quot=0;
	
	printf("Kindly input two numbers\n");
	scanf("%d %d", &num1, &num2);
	
	printf("Choose\n 1. for multiplication\n 2.for division\n");
	scanf("%d", &choice);
		
	if (choice==1) {
		for (i = 1; i<=num2; i++) {
		    result = result + num1;
				
		}
		printf("\nThe Product:%d\n", result);
		
	} else if (choice==2) {
	    if (num2==0) {
	    	printf("\nCannot divide by 0\n");
		
	} else {
		remain = num1;
		while (remain >= num2) {
			remain = remain - num2;
			quot = quot + 1;
		}
		printf("\n Your remainder:%d\n", remain);
		printf("\n Your quotient:%d\n", quot);
		
	}
	
}
return 0;
}
