#include<stdio.h>
void main()
{
	int c;
	printf("enter the temperature in celsius\n");
	scanf("%d",&c);

	int f;
	f=(9/5*c)+32;

    printf("temperature in fahrenheit\n");
    printf("%d",f);


}