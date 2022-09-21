// fibonacci series using recursion
#include<stdio.h>
int refib(int);
int main()
{
	int n,r,i;
	printf("enter the limit");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		r = refib(i);
		printf(" %d ",r);
	}
return 0;
}
int refib(int n)
{
	
	if(n==0)
	return 0 ;
	else if (n==1)
	return 1;
	else
	return refib(n-1)+ refib(n-2);
	
	
}
