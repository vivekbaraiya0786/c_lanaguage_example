#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter the value A :");
	scanf("%d",&a);
	printf("Enter the value B :");
	scanf("%d",&b);
	
	/* swapping using third variable */
	
	c=a;
	a=b;
	b=c;
	
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	
}
