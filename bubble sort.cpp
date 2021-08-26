
#include<stdio.h>
int main()
{
	int a [20],n,i,j,swap;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&a[i]);
		
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (a[j]>a[j+1])
			{
				swap  = a[j];
				a[j]  = a[j+1];
				a[j=1] = swap;
			}
		}
	}
	
	printf("sortted list in ao:");
	
	
	for(j=0;j<n;j++)
	{
		
		printf("%d\t",a[j]);
	}
	
	 
	return 0;
}
