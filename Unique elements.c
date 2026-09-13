#include <stdio.h>
int main()
{
    int a[100];
    int n, i, j, count;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unique elements are: ");
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
