// number of characters in file
#include<stdio.h>
int main()
{
	char ch; int n=0;
	FILE *p;
	p=fopen("file1.txt","r");
	if(p==NULL)
	{
		printf("File doesn't exist\n");
	}
	else
	{
		ch=getc(p);
		while(ch!= EOF)
		{
			printf("%c",ch);
			ch=getc(p);
			n++;
		}
	}
	printf("Number of characters in the string are %d",n);
	fclose(p);
}
