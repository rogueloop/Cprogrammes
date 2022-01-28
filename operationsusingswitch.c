#include<stdio.h>
void main()
{
	printf("CALCULATOR\n");
	float a,b;
	int c;
	printf("enter first number\n");
	scanf("%f",&a);
	printf("enter second number\n");
	scanf("%f",&b);
	printf("enter operation\n1.Addition\n2.sub\n3.multi\n4.div\n");
	scanf("%d",&c);

	switch(c)
	{
		case 1 :
		printf("sum is %f",a+b);
		break;
		case 2 :
		printf("differencee is %f",a-b);
		break;
		case 3 :
		printf("product is %f",a*b);
		break;
		case 4 :
		printf("result is %f",a/b);
		break;
		default:
		printf("unknown opps");
		
	}

} 