/*
 * Even_Or_Odd.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */

#include<stdio.h>

int main()
{
	setbuf(stdout,NULL);
	int x;
	printf("Enter an integer you want to check : \n");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
	return 0;
}


