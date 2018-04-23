/*-----------------------------------------------
	simple.c--Prints string to terminal substituting value of variable int num.
-----------------------------------------------*/ 
#include<stdio.h>

main()
{
	int num; /* define a variable called num */
	num=1; /* assign a value to num */
	
	printf("I am a simple "); /* use the printf function */
	printf("computer.\n"); 
	printf("My favorite number is %d because ",num);
	printf("it is first.\n");	
}

