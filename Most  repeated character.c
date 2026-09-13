#include <stdio.h>
int main()
{
    int a[100];
    int n, i, j;
    int count, max = 0, most;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
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
        if(count > max)
        {
            max = count;
            most = a[i];
        }
    }
    printf("Most repeated number is: %d", most);
    return 0;
}
