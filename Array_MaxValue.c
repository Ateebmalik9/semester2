//maximum value in an array
#include<stdio.h>
int main()
{
	int i;
	int x[5];
	int max ;
	printf("enter the numbers   ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	max=x[0];
	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);
    }
    
    printf("\n\n");
    
    for(i=0;i<5;i++)
    {
    
    	if(max < x[i])
        {
        	max=x[i];
        }    
       
   }
    printf(" the greatest value is %d",max);
    
return 0;
}
