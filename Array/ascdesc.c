//Sort first half in ascending order and second half in descending : 
#include <stdio.h>

int main(void)
{
	int n,temp,sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<=(n-1)/2;i++)
	{
			printf("%d",a[i]);
	}
	
	for(int i=n-1;i>(n-1)/2;i--)
	{
		printf("%d",a[i]);
	}

	// your code goes here
	return 0;
}
