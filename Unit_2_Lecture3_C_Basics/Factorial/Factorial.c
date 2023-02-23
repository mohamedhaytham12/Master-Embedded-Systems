/*
 * Factorial.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */



#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	int num;
	int fact=1;
	int i;
	printf("Enter number : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}

