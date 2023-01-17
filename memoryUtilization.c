/*
*Objective: memory utilization in data types
*In this we will use 'sizeof' function
*Date: 31/12/2022
*Author: Macharia
*/
#include <stdio.h>

int main()
{
/*Using sizeof function*/
printf("int has a value of %d\n", sizeof(int));
printf("unsigned int has a value of %d\n", sizeof(unsigned int));
printf("char has memory value of %d\n", sizeof(char));
printf("float has memory value of %d\n", sizeof(float));
printf("long int has memory value of %d\n", sizeof(long int));
printf("long float has memory value of %d\n", sizeof(double));
printf("long long int has a memory value of %d\n", sizeof(long long int));

/*printf("bit has memory value of %d\n", sizeof(byte));*/
}
