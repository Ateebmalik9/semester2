// Factorial using recursion
#include<stdio.h>
long int recfac (int);
int main()
{
  int n;
  long int r;
  printf("enter the number");
  scanf("%d",&n);
  r=recfac(n);
  printf("answer =%ld",r);

return 0;
}
long int recfac (int n)
{
	if (n==1)
	return 1;
	else
	return n*recfac(n-1);
}

