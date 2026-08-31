#include<stdio.h>
int main()
{
int n,i;
printf("Enter the size of an array:");
scanf("%d",&n);
int arr[n];
printf("Enter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int largest=arr[0];
int secondlargest=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>largest)
{
secondlargest=largest;
largest=arr[i];
}
else if (arr[i]>secondlargest&&arr[i]!=largest)
{
secondlargest=arr[i];
}
}
printf("Second largest number=%d \n",secondlargest);
return 0;
}
