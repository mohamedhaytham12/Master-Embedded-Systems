/*
 * EX7_Swap_Without_Temp.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	int num1 , num2;
	printf("Enter number 1 : \n");
	scanf("%d",&num1);
	printf("Enter number 2 : \n");
	scanf("%d",&num2);
	num1=num1 ^ num2;
	num2=num1 ^ num2;
	num1=num1 ^ num2;
	printf("Number 1 after swapping : %d\n",num1);
	printf("Number 2 after swapping : %d",num2);
	return 0;
}
