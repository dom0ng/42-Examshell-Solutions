#include "flood_fill.h"

void	ac_flood_fill(char **tab, char colour, t_point size, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != colour)
		return ;
	tab[y][x] = 'F';
	ac_flood_fill(tab, colour, size, x + 1, y);
	ac_flood_fill(tab, colour, size, x - 1, y);
	ac_flood_fill(tab, colour, size, x, y + 1);
	ac_flood_fill(tab, colour, size, x, y - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	ac_flood_fill(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
}
