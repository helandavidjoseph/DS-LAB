#include <stdio.h>
int main()
{
    int a[5][5][5];
    int x, y, z, i, j, k;
    int key, low, high, mid;
    int found = 0;
    printf("Enter dimensions: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Enter sorted elements:\n");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            for(k = 0; k < z; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    low = 0;
    high = x * y * z - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        i = mid / (y * z);
        j = (mid / z) % y;
        k = mid % z;
        if(a[i][j][k] == key)
        {
            printf("Element found at [%d][%d][%d]", i, j, k);
            found = 1;
            break;
        }
        else if(a[i][j][k] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;
}
