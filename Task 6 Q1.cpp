#include <stdio.h>

int main() {
	
	int n, i;
	
	printf("Kindly mention the real from which your sequence will start:\n");
	scanf("%d", &n);
	
	printf("Natural numbers in order from your given number to 1 in order\n");
	
	for (i=n; i>=1; i--){
		printf("%d\n", i);
	
	}
	
	return 0;
}
