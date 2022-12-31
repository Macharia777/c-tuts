/*
*filename - test2.c
*purpose - learning to document my code through comments, starting with declaring, initializing and output
*author: Archie
*date: 25/12/2022
*/

#include<stdio.h>

/*every
*Every code has to pass through the main function, or called in the main function 
 */
int main()
{
/*declaring variables of different data types*/
	int num1, num2; /*Integer type*/
	float num3; /*Float type*/
	char firstName; /*Character type*/
/*Initializing the variable otherwise called assigning values for the variables*/
	num1 = 10;
	num2 = 2;
	num3 = -30.8;
	firstName = 'A';
/*Print the content of the variables*/
	printf("num1 is %d\nnum2 is %d\n", num1, num2);
	printf("num3 is %f\n", num3);
	printf("name is %c\n", firstName);

}
