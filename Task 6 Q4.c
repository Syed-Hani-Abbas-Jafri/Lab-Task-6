#include <stdio.h>

int main() {
	
	int num, i, count; 
	
	printf("\nKindly input number:\n");
	scanf("%d", &num);
	
	if (num<0) {
		printf("\nNumber is not a prime");
	} else {
		for (i=2; i<num; i++) {
		if(num%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("\n%d is a prime number",num);
        }
        else{
            printf("\n%d is not a prime number",num);
        }
    }
    return 0;
}
