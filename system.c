#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	"system.h"

/*
** clear the buffer to avoid scanf problems
*/
void	system_clear_buffer(void)
{
		int c;
		while((c=getchar()) != EOF && c != '\n');
}

/*
** Generate a random integer between 1 and p_max_value
*/
int 	system_gen_number(signed short p_max_value)
{
		return (rand() % (p_max_value)) + 1;
}

