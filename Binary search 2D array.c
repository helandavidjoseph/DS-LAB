#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j;
    int key, low, high, mid;
    int found = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter sorted elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    low = 0;
    high = r * c - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        i = mid / c;
        j = mid % c;
        if(a[i][j] == key)
        {
            printf("Element found at [%d][%d]", i, j);
            found = 1;
            break;
        }
        else if(a[i][j] < key)
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
