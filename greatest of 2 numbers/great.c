#include <stdio.h>
void main()
{
    printf("enter 3 numbers");
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
        if(a>c) 

        {   
                printf("%d is greater",a);

        }
    }
    if(b>c)
    {
        printf("%d is greater",b);

    }

    else
    {   
        printf("%d is greater",c);

    }

}