/*
 * Vowel_Or_Consonant.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include<stdio.h>
int main()
{
	setbuf(stdout,NULL);
	char ch;
	printf("Enter an alphabet : \n");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'A' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'i' || ch == 'I' || ch == 'e' || ch == 'E')
	{
		printf("%c is Vowel ",ch);
	}
	else
	{
		printf("%c is Consonant",ch);
	}
}

