#include <stdio.h>

int main(void) {
	int num,count=0;
	scanf("%d",&num);
	
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
			
		}	
		
		if(count==2)
		{
			printf("prime %d",num);
		}
		else
		   printf("not prime %d",num);
		
	
	// your code goes here
	return 0;
}
