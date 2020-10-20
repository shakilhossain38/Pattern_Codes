#include <stdio.h>

int main()
{
    int i, j, k, n,b;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1,b=i;j<=i;j++,b++)
        {
            printf("%d",b);

        }
        printf(" \n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1,b=i;j<=i;j++,b++)
        {
            printf("%d",b);

        }
        printf(" \n");
    }

    return 0;
}
