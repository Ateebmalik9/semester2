// No of sentences in file
#include<stdio.h>
int main()
{
	char ch; int n=0; 
	FILE *p;
	p=fopen("file1.txt","r");
	if(p==NULL)
	{
		printf("File doesn't exist.\n");
	}
	else
	{
		ch=getc(p);
		while(ch!= EOF)
		{
			ch=getc(p);
			if(ch=='.' || ch=='?' || ch=='!')
			{
				n++;
			}
		}
	}
	printf("Number of sentences: %d",n);
	fclose(p);
}
