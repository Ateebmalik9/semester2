// factorial using functions
#include<stdio.h>
int fac (int);
int main()
{
	int a,b,z;
	printf("Enter a number" );
	scanf("%d",&a);
	z = fac(a);
	printf("The factorial of the given number is %d",z);

return 0;
}

int fac (int n)
{
	int i=1,fac = 1;
	for (i=1;i<=n;i++)
	{
		fac = fac*i;
	}
return fac ;
	
	
}
