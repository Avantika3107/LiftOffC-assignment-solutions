#include <stdio.h>

int main()
{
    int n1, n2;
    int sum,sub,mult,mod;
    float div; 
    printf("Enter any two numbers:");
    scanf("%d%d",&n1, &n2);
    
    sum=n1+n2;
    sub=n1-n2; 
    mult=n1*n2;
    div=(float) n1/n2;
    mod=n1%n2;
    
    printf("SUM=%d\n",sum);
    printf("DIFFERENCE=%d\n",sub);
    printf("PRODUCT=%d\n",mult); 
    printf("QUOTIENT=%d\n",div); 
    printf("MODULUS=%d\n",mod); 
    return 0; 
 }
    

 