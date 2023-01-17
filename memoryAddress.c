/*Objective: Show the memory address of variables 
 *Date 31/12/2022
 *Author: Macharia
 *
 */

#include <stdio.h>

int main()
{
int num1 = 6;
int num2 = 10;
int num3 = -20;

printf("The memory address of num1 is %d\n", &num1);
printf("The memory address of num2 is %d\n", &num2);
printf("The memory address of num3 is %d\n", &num3);

}
