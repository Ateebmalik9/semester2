// file opening
#include<stdio.h>
int main()
{
    int x;

    FILE *p;
    p=fopen("file1.txt","w");
    x=5;
   char s[10]= "Hello";
fprintf(p,"%d %s",x,s);
fclose(p);
}
