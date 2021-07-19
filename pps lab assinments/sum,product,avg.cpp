#include <stdio.h>

int main()
{ 
int  a,b,c,sum,product,average;
printf("\nEnter the values of  a,b,c:\n");
scanf("%d%d%d" , &a,&b,&c);
product = a*b*c;
sum = a+b+c;
average = (a+b+c)/3;

printf("\nThe product  is %d \nTHe sum is %d \nThe average is %d " , product,sum,average);
return 0;

}
