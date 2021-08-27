
#include<stdio.h>
int fib(int);
int main()
{
	int i,n,t1=0,t2=1,nextterm;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	printf("the fibonacci series:");
	
	for(i=1;i<=n;++i)
	{
		printf("%d,",t1);
		nextterm = t1 + t2;
		t1=t2;
		t2=nextterm;
	}	
	return 0;
}


