//reverse a given string
#include <stdio.h>

int main(void) {
	int len=0;
	char temp;
	char str[100];
	
	scanf("%s",&str);  //give input as HELLO
	while(str[len]!='\0')
	{
		len++;
	}
	for(int i=0;i<(len-1)/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	printf("%s",str);
	// your code goes here
	return 0;
}

