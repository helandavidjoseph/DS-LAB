#include <stdio.h>
int main()
{
    int a[100], n, i, j, k, temp;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                temp = a[j];
                for(k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                a[n - 1] = temp;
                n--;
                j--;
            }
        }
    }
    printf("Array after rotating duplicates: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
