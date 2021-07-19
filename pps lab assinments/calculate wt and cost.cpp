#include <stdio.h>

int main()
{ 
int items;
float cost,wt,totalcost,totalwt;
printf("\n Enter the no of items:");
scanf("%d" ,&items);
printf("\ncost:");
scanf("%f &cost :");
printf(" wt:");
scanf("%f" ,&wt);
totalwt = items * wt;
printf("Total wt=%f\n" , totalwt,items,wt);
totalcost = items*cost;
printf("Totalcost=%f\n" , totalcost,items,cost);

return 0;

}
