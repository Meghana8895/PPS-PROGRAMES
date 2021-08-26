#include<stdio.h>
int main () 
{
 int loan,time;
 float rate,si;
 
 printf("Enter the amount of loan:");
 scanf("%d",&loan);
 printf("enter rate:");
 scanf("%f",&rate);
 printf("enter time:");
 scanf("%d",&time);
 si= loan*time*rate/100;
 printf("si=%f",si);
 return 0;	
}
