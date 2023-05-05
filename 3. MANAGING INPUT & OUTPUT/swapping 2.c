#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter the value A :");
	scanf("%d",&a);
	printf("Enter the value B :");
	scanf("%d",&b);

	
	/* swapping withpot using third variable */
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	
}
