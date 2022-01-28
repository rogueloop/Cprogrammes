#include <stdio.h>
#define BASENUM 10
int main() 
{
    long long int number, n;
    int i,ld;
    int f[BASENUM];

    
    scanf("%lld", &number);

    for(i=0; i<BASENUM; i++)
    {
        f[i] = 0;
    }

     n = number/10;

    
    while(n != 0)
    {
        
        ld = n % 10;

        
        n /= 10;

        
        f[i]++;
        f[ld]--;
        f[i]++;
    }

    for(i=0; i<BASENUM; i++)
    {
        printf("Frequency of %d = %d\n", i, f[i]);
    }

    return 0;
}