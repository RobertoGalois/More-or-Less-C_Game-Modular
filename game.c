#include	<stdio.h>
#include	"game.h"
#include	"level.h"
#include	"system.h"
#include	"show.h"
#include	"check.h"

/*
** Do a complete game from generating the mystery number and ask until the player find it
*/
void	game(void)
{
		signed short	number;
		signed short	number_tested;
		signed int		count;
		char			*plural;
		signed short	max_value;
		signed short	level;

		plural = "s";
		count = 0;
		level = level_select();
		max_value = level_select_max_value(level);
		number = system_gen_number(max_value);

		show_msg_go(level);
		while (number_tested != number)
		{
			count++;
			printf("Entrez un nombre: ");
			scanf("%hd", &number_tested);
			getchar();
			check_choice(number_tested, number, max_value);
		}

		if (count == 1)
			plural = "";

		printf("Bravo vous avez trouve !\nLe nombre mystere etait %d !\nVous avez trouve en %d essai%s !\n", number, count, plural);
		printf("Veuillez appuyer sur [ENTREE] pour nous communiquer votre satisfaction !");
}


/*
** Ask to the player if he wants a new game, and return the answer
*/
short	game_ask_continue()
{	
		char			c_continue;
		signed short	bool_loop; 
	
		do
		{
			system_clear_buffer();
			printf("\n");
			printf("Yeah ! Voulez-vous refaire une partie ? (O/N): ");
			bool_loop = scanf("%c", &c_continue);
		}
		while ((bool_loop != 1) || (c_continue != 'O' && c_continue != 'N'));

		if(c_continue == 'O')
			return (1);

		else
			return (0);
}
