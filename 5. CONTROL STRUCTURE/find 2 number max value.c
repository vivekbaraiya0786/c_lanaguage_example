#include<stdio.h>

main()
{
	int a,b;
	printf("Enter value of A :");
	scanf("%d",&a);
	printf("Enter value of B :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("A is a max...");
	}
	else if(b>a)
	{
		printf("B is a max...");
	}
	else
	{
		printf("Both are equal...");
	}
}
