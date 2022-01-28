#include <stdio.h>

 void series(int n);
 
  void series(int n){
      
     
     int a=0,b=1,c=0;

//displayfirst term
    
      printf("%d",c);
    
      c=a+b;

    for (int i=0;i<=n-2;i++)
    {     
         printf ("\t%d",c);
         
             c=a+b;
              a=b;
              b=c;
          
    }
    
 }
 
 void main(){
    int n;

    printf("enter the limit : ");
    scanf("%d",&n);
     
     series(n);
   
     
}