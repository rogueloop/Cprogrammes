// Sum and average of N numbers using array

#include<stdio.h>
void main()
{

	int n;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n],i=0,sum=0,avr;
	while(i<n)
	{
		printf("enter number");
		scanf("%d",&a[i]);
		sum = sum + a[i];
		i++;
	}
	avr = sum/n;
	printf("Sumof elements=%d",sum);
	printf("Average of elements=%d",avr);

}