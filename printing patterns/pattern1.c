#include <stdio.h>

int main(void) {
	int row;

	scanf("%d\n",&row);
	// your code goes here
	for (int i=1;i<=row;i++)
	{
		for(int space=1;space<=(row-i);space++)
		{
			printf(" ");
		}
		for(int j=1;j<=(2i-1);j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}

expected o/p:
    *
   ***
  *****
 *******
*********
