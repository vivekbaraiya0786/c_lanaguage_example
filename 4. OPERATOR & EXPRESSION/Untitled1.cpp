#include<stdio.h>
main()
{
	 int r,c;
	 printf("Enter row :");
	 scanf("%d",&r);
	 printf("Enter coloumn :");
	 scanf("%d",&c);
	 
	 int array[r][c];
	 int i,j;
	 
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("Enter array[%d][%d]=",i,j);
	 		scanf("%d",&array[i][j]);
		 }
	 }
	 
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;i<r;i++)
	 	{
	 		printf("%d",array[i][j]);
		 }
		 printf("\n");
	 }
}
