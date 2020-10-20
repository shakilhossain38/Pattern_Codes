#include<stdio.h>
int main()
{
    int n,m,i,j,b;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1,b=i;j<=i;j++,b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1,b=i;j<=i;j++,b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}
