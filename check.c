#include	<stdio.h>
#include	"check.h"
#include	"system.h"

/*
** check if the level chose by the player is 1, 2 or 3 and nothing else
*/
short	check_level(int p_ret_scanf, signed short p_level)
{
		system_clear_buffer();
		if(p_ret_scanf == 1)
		{
			switch (p_level)
			{
				case 1:
				case 2: 
				case 3: 
					return (1);
				break;
				default:
					return (0);
			}
		}
		else
			return(0);
}

/*
** Say to the player that the number he chose is bigger or smaller (or same) as the "nombre mystere"
** Also check if the choice is in the good interval
*/
void	check_choice(signed short p_number_tested, signed short p_number, signed short p_max_value)
{
		if (p_number_tested >= 1 && p_number_tested <= p_max_value)
		{
			if (p_number_tested > p_number)
				printf("Le nombre choisi est trop GRAND !\n");

			else if (p_number_tested < p_number)
				printf("le nombre choisi est trop PETIT !\n");

			else 
				printf("Et c'est le GG!\n");
		}
		else 
			printf("ATTENTION ! Entrez un nombre compris entre 1 et %hd !\n", p_max_value);
}





