#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[1000000];
	gets(c);
	int len = strlen(c), count = 1;
	
	for (int i = 0; i < len; i++)
	{
		if (c[i] == ' ')
			count++;
	}

	if (len != 1)
	{
		if (c[0] == ' ')
			count--;
		if (c[len - 1] == ' ')
			count--;
	}
	else
	{
		if (c[0] == ' ')
			count = 0;
	}

	printf("%d", count);
}