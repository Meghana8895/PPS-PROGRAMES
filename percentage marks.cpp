
#include<stdio.h>
int main()
{
	int p;
	printf(" enter the percetage value:");
	scanf("%d",&p);
	if (p < 40)
	printf("failed");
	else if(p>40 & p< 60)
	printf(" second class");
	else if (p >60 & p<=70)
	printf("first class");
	else
	printf("distinction");
	
	return 0;
}
