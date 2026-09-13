#include <stdio.h>
int main()
{
    int a[5][5][5];
    int x, y, z, i, j, k, key;
    int found = 0;
    printf("Enter dimensions: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Enter elements:\n");
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
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            for(k = 0; k < z; k++)
            {
                if(a[i][j][k] == key)
                {
                    printf("Element found at [%d][%d][%d]", i, j, k);
                    found = 1;
                    return 0;
                }
            }
        }
    }
    if(found == 0)
        printf("Element not found");
    return 0;
}
