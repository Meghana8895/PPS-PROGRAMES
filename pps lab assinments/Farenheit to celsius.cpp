#include <stdio.h>

int main()
{
	float celsius , farenheit;
	printf("Enter the temperature in farenheit : ");
	scanf("%f" , &farenheit);
	
	celsius = (farenheit - 32) * 5/9;
	printf("\ncelsius = %2f" , celsius);
	
	return 0;
	 
}
	
