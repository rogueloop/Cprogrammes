/*
1.start
2.read the no 
3.sum=0
4.if(n>0) goto 5 else
5.sum=sum+n%10
6.n=n/10 goto 4
7.print sum
8.stop 
*/

#include <stdio.h>
void main()
{
	int n,sum=0;
	printf("enter a number",n);
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	
	printf("%d is the sum",sum);
}
