// to determine whether a number is prime or not
#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number_");
    scanf("%d",&n);
for (i=2;i=n/2;i++)
{
    if(n%i==0)
    {

    flag=0;
    break;
    }
    if(flag==0)
   {
    printf("the number is not prime.");
    break;
   }
    if(flag==1)
      {
          printf("the number is prime.");
          break;
      }


}
return 0;
}
