#include <stdio.h>

int main()
{ 
int empid,hrs,amtperhr;
float salary;
printf("\nemployees id:");
scanf("%d" , &empid);
printf("\nTotal worked hrs and amt recived:\n");
scanf("\n%d%d",&hrs,&amtperhr);
salary = hrs*amtperhr;
printf("salary per month =%f", salary,hrs,amtperhr);
return 0;

}
