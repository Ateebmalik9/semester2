//size of a character array
#include<stdio.h>
int main()
{
	int i;
	char name[100];
	printf(" Enter your first name_ ");
	scanf("%s",&name);
	i=0;
	while (name[i]!=0)
	{
		i++;
	}
	printf("The number of letters in your name : %d",i);
	
	
return 0;
}
