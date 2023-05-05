#include<stdio.h>
main()

{
	int a,b,c,d;
	
	printf("enter the value of A:");
	scanf("%d",&a);
	printf("enter the value of B:");
	scanf("%d",&c);
	printf("enter the value of C:");
	scanf("%d",&c);
	printf("enter the value of D:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max..");	
			}
			else
			{
				printf("d is max..");
			}
		}
    }
		else if(b>c)
	        {		
		       if(b>d)	
			    {
			    	printf("b is max..");
				}
				else
				{
					printf("d is max..");
				}
		    }
		else if(c>d)
		{
			printf("c is max..");
	    }    
	    else
	    {
	    	printf("d is max..");
		}
	getch();
}
		
		
