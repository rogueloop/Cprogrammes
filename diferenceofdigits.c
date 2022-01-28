#include<stdio.h>

void main()

{

int n,even_count=0,odd_count=0,diff;

printf("enter the limit");

scanf("%d",&n);

int a[n];

int i=0;

while(i<n)

{

scanf("%d",&a[i]);

i++;

}


i=0;

while(i<n)

{

even_count=even_count+a[i];

i=i+2;

}


i=1;

while(i<n)

{

odd_count=odd_count+a[i];

i=i+2;

}

printf("even count%d\n",even_count);

printf("odd count%d\n",odd_count);

diff=even_count-odd_count;

printf("%d",diff);

}

