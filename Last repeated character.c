#include <stdio.h>
int main()
{
    char a[100];
    int n,i,j;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the characters:");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                printf("Last repeated character=%c",a[i]);
                return 0;
            }
        }
    }
    printf("No repeated character");
    return 0;
}
