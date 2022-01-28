//Linear Search
#include<stdio.h>
void main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
printf("enter the element");
scanf("%d",&a[i]);
}
int s;
printf("enter the element to be searched");
scanf("%d",&s);
int flag=0;
for(int i=0;i<n;i++)
{
   if(s==a[i])
    {
        flag=1;
        break;
     }

}

if(flag)
     printf("element found");
else
    printf("element not found");
}