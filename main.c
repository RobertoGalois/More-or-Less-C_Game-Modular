#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	"game.h"

/*
** Main..	
*/
int		main(void)
{
		signed short	continue_bool;

		srand(time(NULL)); /* init timer to generate random numbers */
		continue_bool = 1;
		while(continue_bool == 1)
		{
			game();
			continue_bool = game_ask_continue();
		}

		printf("\n========================================================\n");
		printf("Au revoir ! On s'est bien marres ! A Tot-Bien j'espere !");
		printf("\n========================================================\n\n");
		return (0);
}



