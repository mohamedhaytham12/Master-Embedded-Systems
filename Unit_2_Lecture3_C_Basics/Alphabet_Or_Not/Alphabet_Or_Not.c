/*
 * Alphabet_Or_Not.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	char ch;
	printf("Enter a char : \n");
	scanf("%c",&ch);
	if((ch>='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("%c is alphabet",ch);
	}
	else
	{
		printf("%c is not alphabet",ch);
	}
	return 0;
}

