// to reopen a file
#include<stdio.h>
int main()
{
    FILE *p;
    if(p==NULL)
        printf("file doesn't exist.");
    else{
        p=fopen("file1.txt","r");
        int x; char s[10];
        fscanf(p,"%d %s",x,s);
        printf("File contents=%d %s",x,s);
        fclose(p);

    }
}
