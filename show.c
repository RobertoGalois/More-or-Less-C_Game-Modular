#include	<stdio.h>
#include	"show.h"


/*
** Just printf the main menu
*/
void	show_menu(void)
{
		printf("\nBienvenue dans le jeu du PLUS OU MOINS !\n");
		printf("========================================\n");
		printf("Entrez le niveau de difficulte desire:\n");
		printf("-------------------------------------\n");
		printf("1 - Nombre mystere compris entre 1 et 100\n");
		printf("2 - Nombre mystere compris entre 1 et 1000\n");
		printf("3 - Nombre mystere compris entre 1 et 10000!!!\n");
		printf("C'est a vous: ");
}


/*
** Just printf the beginning of the game width the level and the interval
*/
void	show_msg_go(signed short p_level)
{

		printf("\n===========================\n");
		printf("SUPER ! Allez c'est parti !\n");
		printf("===========================\n");
		switch(p_level)
		{
			case 1:
				printf("Niveau 1: Facile          !\n");
				printf("===========================\n");
				printf("Intervalle  [1;100]       !\n");
			break;

			case 2:
				printf("Niveau 2: Moyen           !\n");
				printf("===========================\n");
				printf("Intervalle  [1;1000]      !\n");
			break;

			case 3:
				printf("Niveau 3: HardCore        !\n");
				printf("===========================\n");
				printf("Intervalle  [1;10000]     !\n");
			break;

			default: 
				printf("Error, probleme dans la fonction show_msg_error\n");
		}
		printf("===========================\n\n");
}
