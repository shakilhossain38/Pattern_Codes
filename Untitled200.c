#include<stdio.h>
int main()
{
    int b,n,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(m=1,b=i;m<=i;m++,b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(m=1,b=i;m<=i;m++,b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

}
