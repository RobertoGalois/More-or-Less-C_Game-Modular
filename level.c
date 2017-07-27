#include	<stdio.h>
#include	"level.h"
#include	"show.h"
#include	"check.h"

/*
** Select the level by the user
*/
signed short	level_select(void)
{
				signed short result_scanf_level;
				signed short level;

				do
				{
					show_menu();
					result_scanf_level = scanf("%hd", &level);
	
				} while (check_level(result_scanf_level, level) != 1);

				return level;
}

/*
** return the max value of the "Nombre Mystere" knowing the level
*/
signed short	level_select_max_value(signed short p_level)
{
	switch(p_level)
	{
		case 1:
			return (100);
		break;
		case 2:
			return (1000);
		break;
		case 3: 
			return (10000);
		break;
		default:
			return (0);
	}
}

