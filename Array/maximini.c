//Find maximum minimum element in array
#include <stdio.h>

int main(void) {

	// your code goes 
	int temp,n;
	scanf("%d\n",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n-1;i++) //pass
	{
		for(int j=0;j<n-1;j++)
		{ //
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			
			}
		}
	}
		
			printf("maximum num is %d\n",arr[n-1]);
			printf("minimum num is %d\n",arr[0]);
			
		
	
	return 0;
}
