#include<stdio.h>
#include<math.h>

void main()
	{

		int a,b,c,d;
		printf("entervalues of a,b,c");
		scanf("%d%d%d",&a,&b,&c);
		d=b*-4*a*c;
		if(d>0)
		{
			float r1,r2;
			r1 = (-b + sqrt(d))/2*a;
			r2 = (-b - sqrt(d))/2*a;
			printf("roots are %d and %d",r1,r2);
		}
		else if(d<0)
		{
			printf("complex roots");
		}
		else
		{
			float r;
			r=-b/2*a;
			printf("roots are equal");


		}





	}	