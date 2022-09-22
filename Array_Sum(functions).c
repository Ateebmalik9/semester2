// sum of elements of an array using functions
#include<stdio.h>
int sum(int x[]);
int main()
{
	int c;
	int arr[5]={1,5,2,6,3};
	c = sum(arr);
	printf("the sum of elements of array is %d",c);
	
return 0;
}

int sum(int x[])
{
	int i, sum =0;
	for (i=0;i<5;i++)
	{
		sum = sum + x[i];
	}
return sum;
}
