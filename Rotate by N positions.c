#include <stdio.h>
int main()
{
    int a[100], n, k, i, j, temp;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number of positions: ");
    scanf("%d", &k);
    for(i = 0; i < k; i++)
    {
        temp = a[0];
        for(j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
