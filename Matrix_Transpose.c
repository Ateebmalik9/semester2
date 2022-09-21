//Transpose of a matrix
#include<stdio.h>
int main()
{
	int a[100][100],transpose[100][100],r,c,i,j;
  /* to get the size of the matrix */
	printf("Enter the no. of rows and columns");
	scanf("%d %d",&r,&c);
	/*to get the values of the matrix */
	printf("Enter the values");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	scanf("%d",&a[i][j]);
	printf(" The given matrix:\n");
	for(i=0;i<r;++i)
	{
	for(j=0;j<c;++j)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
    }
    /* transpose */
    for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	transpose[j][i]= a[i][j];
	/*transpose printing*/
	printf("The tranposed matrix : \n ");
	for(i=0;i<r;++i)
	{
	for(j=0;j<c;++j)
	{
		printf("%d ",transpose[i][j]);
	}
	printf("\n");
    }
return 0;
}
