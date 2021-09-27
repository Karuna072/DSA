#include <stdio.h>

int main(void) {
	
	int row;
	scanf("%d",&row);
	
	// your code goes here
	for(int i=1;i<=row;i++)
	{
	
		for(int j=1;j<=i;j++)
		{
			printf("%c",64+j);
		}
		printf("\n");
	}

		
	
	return 0;
}

expected output:
input :5
A
AB
ABC
ABCD
ABCDE
