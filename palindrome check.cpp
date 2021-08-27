
#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
    temp=num;
    while(num!=0)
	
	{
		rem = num%10;
		rev= rev*10 + rem;
		num = num / 10;
		sum = sum+rem;
				
	}
	
	printf("\nreversed number:%d",rev);
	
	if (temp == rev)
	{
		printf("the given number %d is palindrome",temp);
	}
	
	else
	{
		printf("\nthe given number %d is not palindrome",temp);
	}
	
	return 0;
	
}
