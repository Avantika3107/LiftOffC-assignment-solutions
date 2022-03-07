#include<stdio.h>
int main()
{
	int n[10];
	int i,oddsum,evensum,sum;
	for(i=0;i<10;i++)
	{
		printf("Enter number:");
		scanf("%d",&n[i]);
		if(n[i]%2==0)
		evensum+=n[i];
		else
		oddsum+=n[i];
		sum+=n[i];
	}

    printf("Sum of all odd numbers are:%d",oddsum);
    printf("Sum of all even numbers are:%d",evensum);
    printf("Sum of all 10 numbers is:%d\n",sum);
    
    return 0;

}
