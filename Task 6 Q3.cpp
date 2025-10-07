#include <stdio.h> 

int main() {
	
	int n,i, num, last, sum;
	
	printf("Kindly enter your number\n");
	scanf("%d", &num);
	
	last = num % 10;
	n = num;
	for (i=1; n >= 10; i++ ) {
		n = n/10;
	}
	
	sum = last + n;
	printf("\nThe first number is:%d\n", n);
	printf("\nThe last number is:%d\n", last);
	printf("The sum is:%d\n", sum);
	
	return 0;
}
