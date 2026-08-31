#include<stdio.h>
int main()
{
char a[100];
int n,i,j,found=0;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter characters:");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("First repeated charcter:%s",&a[i]);
return 0;
}
}
}
printf("No repeated character");
return 0;
}

