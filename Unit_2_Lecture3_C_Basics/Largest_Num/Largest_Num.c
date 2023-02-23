/*
 * Largest_Num.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */



#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	int num1 , num2 , num3;
	int max;
	printf("Enter Three Numbers : \n");
	scanf("%d%d%d",&num1,&num2,&num3);
	max = num1;
	if(num2 > max)
	{
		max=num2;
	}
	else
	{
		max=num3;
	}
	printf("%d is the largest",max);
	return 0;
}
