#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j, key;
    int found = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == key)
            {
                printf("Element found at position [%d][%d]", i, j);
                found = 1;
                return 0;
            }
        }
    }
   if(found == 0)
        printf("Element not found");
   return 0;
}
