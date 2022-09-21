// reversing an array
#include<stdio.h>
int main()
{
	int i,n;
	char name[100];
	printf ("Enter your first name_ ");
	scanf("%s",&name);
	printf("Enter the number of letters in your first name_ ");
	scanf("%d",&n);
		for(i=n-1;i>=0;i--)
		printf("%c",name[i]);
return 0;	
}
