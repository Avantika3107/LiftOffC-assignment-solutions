#include<stdio.h>

void main()
{
    int n;
    printf("Enter any number to check if it is even or odd:");
    scanf("%d",&n); 
    
    switch(n%2)
    {
    case 0:
    printf("%d is an EVEN number\n", n);
    break;
    case 1:
    printf("%d is an ODD number\n",n); 
    break; 
    default:
    printf("invalid input")
    break:
    }
 }
