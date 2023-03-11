#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	char data[2001] = "programming is fun!";

	fgets(data, 2000, stdin);

//	scanf("%s" , &data); // scanf와 fgets 모두 입력받는 코드라는걸 몰랐다. 매우 바보같은 실수
	printf("%s", data);

	return 0;
}
