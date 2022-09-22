// print 1 to 20 barring 10
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i=10)
        {
            continue;
        }
        else
        {
          printf("%d",i);

        }
    }

return 0;
}
