#include<stdio.h>

void main()
{
   char ch;
   int x,y; 
   printf("select the operators[+,-,*,/,%%]");
   scanf("%ch",&ch); 
   printf("enter two numbers:");
   scanf("%d%d",&x,&y); 
   switch(ch)
  {
    case '+':
    printf("%d+%d=%d\n",x, y, x+y);
    break;
    
    case '-':
    printf("%d-%d=%d\n",x, y, x-y); 
    break; 
     
    case '*':
    printf("%d*%d=%d\n",x, y, x*y);
    break; 
    
    case '/':
    printf("%d/%d=%d\n",x, y, x/y);
    break; 
    
    case '%':
    printf("%d%%d=%d\n",x, y, x%y);
    break; 
    
    printf("Input is not valid");
  }
}
 
