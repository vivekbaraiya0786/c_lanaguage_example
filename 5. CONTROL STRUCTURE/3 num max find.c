#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  
  printf("enter value of A:");
  scanf("%d",&a);
  printf("enter value of B:");
  scanf("%d",&b);
  printf("enter value of C:");
  scanf("%d",&c);


    if(a>b)
      {
		if(a>c)
		{
		   printf("a  is big");
		}
		else
		{
	   		printf("c is big",c);
		}
      }
    else 
    	{
			if(b>c)
			{
	   			printf("b is big",b);
			}
			else
			{
	   			printf("c is big",c);
			}
      	}

}
