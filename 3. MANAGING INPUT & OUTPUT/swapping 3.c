#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter the value A :");
	scanf("%d",&a);
	printf("Enter the value B :");
	scanf("%d",&b);
    printf("Enter the value C :");
	scanf("%d",&c);
	
	/* swapping  three variable */
	
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	printf("C=%d\n",c);
}
