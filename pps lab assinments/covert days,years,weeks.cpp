#include <stdio.h>

int main()
{ 

int numofdays ,years ,weeks ,days;
printf("Enter num of days:");
scanf("%d", &numofdays);
years = numofdays/365;
days = (numofdays % 365)%7;
weeks = (numofdays % 365)/7;
printf("\n num of years = %d" , years);
printf("\n num of days = %d" , days);
printf("\n num of weeks = %d" , weeks);
return 0;

}
