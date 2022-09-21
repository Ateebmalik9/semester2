// add n natural numbers using recursion
#include<stdio.h>
int readd(int);
int main (){
	
	int n,r;
	printf("enter the value");
	scanf("%d",&n);
	r = readd(n);
	printf("sum = %d",r);
}
int readd(int n)
{

if (n==0)
return 0;
else
return n + readd(n-1);
}
