#include <stdio.h>

int main()
{ 
int num1, num2;
 printf("\n Enter two numbers :\n");
 scanf("%d%d",&num1,&num2);
 
 if(num1 > num2)
  printf("\n %d is max",num1);
 
 else if(num1 < num2)
  printf("\n %d is max",num2);
  
 else
 
  printf("\n Both numbers are equal");


return 0;

}
