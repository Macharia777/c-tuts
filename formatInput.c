/*
 *Objective -  How to use the scanner function for user input (user input)
 *Author: Macharia
 *Date: 12 January 2023
 */

#include <stdio.h>
#include <curses.h>

int main()
{

int a,b, sum;

printf("Please enter a\n");
scanf("%i", &a);

printf("please enter b \n");
scanf("%i", &b);

sum = a + b;

printf("%d + %d = %d \n", a, b, sum);
return 0;
}
