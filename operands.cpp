
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,ch;
	
	printf("Enter the values of a,b:");
	scanf("%d%d",&a,&b);
	
	printf("Enter the operator ch: 1: +, 2:-, 3:*,4:'%''");
	scanf("%d",&ch);
	
		switch(ch)
	{
		case 1:
			c = a+b;
			printf("c =%d",c);
			break;
			
		
		case 2:
		     c = a-b;
			printf("c =%d",c);
			 break;	
		
		
		case 3:
		     c = a*b;
		     printf("c =%d",c);
		     break;
		     
		case 4:
		    c = a%b;
		    printf("c =%d",c);
			break;
					     
	}
	
	
	return 0;
}
