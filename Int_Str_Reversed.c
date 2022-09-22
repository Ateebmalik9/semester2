//display integers of a string in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Please enter the number_");
    scanf("%d",&i);
    do
    {
        n=i%10;
        printf("%d",n);
        i=i/10;
    }while(i!=0);
return 0;
}
