//finding the sum of all digits of an integer
#include<stdio.h>
int main()
{

    int n,i,r,sum=0;
    printf("Please enter the integer_");
        scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The Sum is %d", sum);
return 0;
}
