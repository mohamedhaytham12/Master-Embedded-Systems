/*
 * EX2_Print_Int_By_User.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Mohamed Haytham
 */


#include <stdio.h>

int main()
{
	setbuf(stdout,NULL);
	int x;
	printf("Enter a integer : \n");
	scanf("%d",&x);
	printf("You entered:%d",x);
	return 0;
}
