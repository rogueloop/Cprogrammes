/* ALGORYTHM 
1.START
2.READ THE NUMBER n
2.1.if n==1 goto 2.2
2.2. print neither prime nor composite
3.COUNT=2,flag=1
4.IF(COUNT<n) goto 5 else go to 8
5.if n%count==0goto 6 else 7
6.flag=2,go to 8
7.count++ goto 4
8.if(flag==1)
9.print prime
10.print not pr
11.stop
*/
#include<stdio.h>
void main{
	int n;
	printf("enter no");
	scanf("%d",&n);
	if(n==1){
			printf("error");
		    }
	else{

		int count=2,flag=1;
		while(count<n){
			if(n%count==0){
				flag=0;
				break;
			}
			count++;

		}
	if(flag==1){
		pritf("prime numbers")
	else
		print("not prime")

	}	
}







}