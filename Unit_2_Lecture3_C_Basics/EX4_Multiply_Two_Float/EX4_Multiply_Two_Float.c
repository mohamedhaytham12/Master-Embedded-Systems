/*
 * EX4_Multiply_Two_Float.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include<stdio.h>

int main()
{
	setbuf(stdout,NULL);
	float num1 , num2;
	float mul;
	printf("Enter two numbers:");
	scanf("%f%f",&num1,&num2);
	mul=num1*num2;
	printf("Product:%f",mul);
	return 0;
}
