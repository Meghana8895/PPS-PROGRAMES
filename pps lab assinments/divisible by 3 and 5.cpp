#include <stdio.h>

int main()
{
	
	int num;
	printf("Enter num :");
	scanf("%d" , &num); 
	if (num%3 == 0 & num%5 == 0)
	   printf("The given number is divisible");
	else
    	printf(" The given number is not divisible ");
	
	return 0;
}
