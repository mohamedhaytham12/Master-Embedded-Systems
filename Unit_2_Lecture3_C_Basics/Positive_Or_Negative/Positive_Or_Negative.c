/*
 * Positive_Or_Negative.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include <stdio.h>
int main()
{
	setbuf(stdout,NULL);
	int num;
	printf("Enter number to check : \n");
	scanf("%d",&num);
	if(num > 0)
	{
		printf("%d is positive \n",num);
	}
	else if (num < 0)
	{
		printf("%d is negative \n",num);
	}
	else
	{
		printf("%d is Zero",num);
	}
	return 0;

}


