#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

#include <stdio.h>
//去除输入中的多个空格置输出一个
int main()
{
	int c;
	char d='a';
	while ((c = getchar()) != EOF)
	{
		if (c!=' ')
		{
			putchar(c);
		}
		else
		{
			if (d != ' ')
			{
				putchar(c);

			}
			
			
		}
		d = c;
		
	}
}