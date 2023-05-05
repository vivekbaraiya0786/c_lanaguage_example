#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("%d is smallest",a);
	}
	else
	{
		printf("%d is smallest",b);
	}
}
