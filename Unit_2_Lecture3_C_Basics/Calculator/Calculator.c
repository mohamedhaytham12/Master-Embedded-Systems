/*
 * Calculator.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	char operator;
	float firstNumber,secondNumber;
	double result;

	printf("Enter an operator + or - or * or % ");
	scanf("%c", &operator);

	printf("\nEnter two operands: ");
	scanf("%f %f",&firstNumber, &secondNumber);

	/* Swicth case to perfrom the required operations */
	switch(operator)
	{
	case '+':
		result = firstNumber + secondNumber;
		printf("\n%f + %f = %lf",firstNumber, secondNumber, result);
		break;

	case '-':
		result = firstNumber - secondNumber;
		printf("\n%f - %f = %lf",firstNumber, secondNumber, result);
		break;

	case '*':
		result = firstNumber * secondNumber;
		printf("\n%f * %f = %lf",firstNumber, secondNumber, result);
		break;

	case '/':
		result = firstNumber / secondNumber;
		printf("\n%f / %f = %lf",firstNumber, secondNumber, result);
		break;

		/* operator doesn't match any case constant (+, -, *, /) */
	default:
		printf("Error! operator is not correct");
	}

	return 0;
}

