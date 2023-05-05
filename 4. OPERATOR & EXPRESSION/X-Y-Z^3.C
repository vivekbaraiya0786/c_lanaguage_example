#include<stdio.h>
#include<conio.h>
main()
{
	int x=15,y=5,z=2;
	printf("Value of (x-y-z)^3=%d",(x*x*x)-(3*x*x*y)-(3*x*x*z)+(3*x*z*z)-(3*y*z*z)+(3*x*y*y)-(z*z*z)-(3*y*y*z)+(6*x*y*z)-(y*y*y));
	
	getch();
}
