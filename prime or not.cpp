
#include<stdio.h>
int main()
{
	int num,i,flag =0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i =2;i<=num/2;i++)
	{
	
	if (num%i == 0)
	flag++;
}
 
    if(flag ==0)
    printf("prime num");
     
    else
    printf("not prime");
    
    
    return 0;
	
	
	
	
	

}

