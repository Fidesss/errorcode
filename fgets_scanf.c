#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	char data[2001] = "programming is fun!";

	fgets(data, 2000, stdin);

	scanf("%s" , &data);
	printf("%s", data);

	return 0;
}
