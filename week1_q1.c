#include<stdio.h>

int main()
{
    char n[100],b[100],h[100],e[100];
    int r;
    printf("\nEnter your name:\n");
    gets(n);

    printf("\nEnter your branch:\n");
    gets(b);

    printf("\nEnter your hobbies:\n");
    gets(h);

    printf("\nEnter your registration number:\n");
    scanf("%d",&e);
     
    printf("Your name is :%s\n",n);
    printf("Your branch is:%s\n",b);
    printf("Your hobbies are:%s\n",h);
    printf("Your registration number is:%s\n",e);
    
    return 0;
}
