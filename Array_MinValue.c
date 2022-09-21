//minimum value in an array
#include<stdio.h>
int main()
{
	int i;
	int x[5];
	int min ;
	printf("enter the numbers   ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	min=x[0];
	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);
    }

    printf("\n\n");

    for(i=0;i<5;i++)
    {

    	if(min > x[i])
        {
        	min=x[i];
        }

   }
    printf(" the lowest value is %d",min);

return 0;
}
