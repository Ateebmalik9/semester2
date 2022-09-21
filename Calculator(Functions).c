//add subtract and divide
#include <stdio.h>
int add (int,int);
int sub (int,int);
int pro(int,int);
float div(int,int);
int main()
{
	int x,y,z,u,s;
	float t;
	printf("enter 2 integers");
	scanf("%d %d",&x,&y);
	z = add(x,y);
	printf("Sum = %d ",z );

	s = sub(x,y);
	printf("difference = %d ",s);

	u = pro(x,y);
	printf("Product = %d ",u);

	t = div(x,y);
	printf("quotient = %f ", t);
return 0;
}

int add (int a, int b)
{
	int c;
	c = a+b;
	return c ;
}

int sub (int a, int b)
{
	int c;
	c = a-b;
	return c;
}

int pro(int a,int b)
{
	int c;
	c = a*b;
	return c;
}

float div (int a, int b)
{
	float c ;
	c =a/b;
	return c;
}

