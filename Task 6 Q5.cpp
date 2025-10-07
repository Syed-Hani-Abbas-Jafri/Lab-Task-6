#include<stdio.h>
int main()
{
	int a,b,c,num,i;
	printf("Enter number:");
	scanf("%d",&num);
	a=0;
	b=1;
	printf("\nFibonacci series:%d %d",a,b);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
