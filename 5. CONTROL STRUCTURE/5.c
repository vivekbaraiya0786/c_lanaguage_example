#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a number of A :");
	scanf("%d",&a);
	printf("Enter a number of B :");
	scanf("%d",&b);
	printf("Enter a number of c :");
	scanf("%d",&c);
	
	
	(a>b)
	     ?(a>c)
	            ?printf("a is big")
	            :printf("c is big")
	 	:(b>c)           
	    		?printf("b is big")
		        :printf("c is big");
	getch();
}
