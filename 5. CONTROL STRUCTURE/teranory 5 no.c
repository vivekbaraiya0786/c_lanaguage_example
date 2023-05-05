#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter a number of A :");
	scanf("%d",&a);
	printf("Enter a number of B :");
	scanf("%d",&b);
	printf("Enter a number of C :");
	scanf("%d",&c);
	printf("Enter a number of D :");
	scanf("%d",&d);
	printf("Enter a number of E :");
	scanf("%d",&e);

	int max=a;
	max=(b>max)?b
			   :max;
	max=(c>max)?c
			   :max;
    max=(d>max)?d
			   :max;			
	max=(e>max)?e
			   :max;
	
	printf("\nmax is %d",max);
	
/*	(a>b)
	     ?(a>c)
	           ?(a>d)
	                ?(a>e)
	                      ?printf("a is big")
	                      :printf("e is big")
	                :(d>e)
                          ?printf("d is big")
                          :printf("e is big")
               
	?(b>c) 
	     ?(b>d)         
		      ?(b>e) 
	               ?printf("b is big")
	               :printf("e is big")
              :(d>e)
                   ?printf("d is big")
                   :printf("e is big")
			       
	:(c>d)
	      ?(c>e)
		       ?printf("c is big")
			   :printf("e is big")
		  :(d>e)
		       ?printf("d is big")
			   :printf("e is big");  */
			   	   		    
}
