
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
     c = a+b;
printf("a+b = %d \n",c);

 c = a-b;
printf("a-b = %d \n",c);


 c = a*b;
printf("a*b = %d \n",c);


 c = a/b;
printf("a/b = %d \n",c);


 c = a%b;
printf("Remainder when a divided by b = %d \n",c);

printf("++a = %d \n", ++a);

printf("--b = %d \n", --b);

printf("a&b = %d\n", a&b);

printf("a|b = %d\n", a|b);

printf("a^b = %d\n", a^b);

return 0;
	
}
