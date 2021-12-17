/*
** EPITECH PROJECT, 2018
** algo
** File description:
** algorithm of bsq
*/

#include "my.h"

int nb_comp(int center, int left, int up, int up_left)
{
	if (center == 0)
		return (0);
	if (left <= up && left <= up_left)
		return (left);
	if (up <= left && up <= up_left)
		return (up);
	if (up_left <= up && up_left <= left)
		return (up_left);
	return (0);
}

void algo(int **tab, int nbline, int nbcol)
{
	int i = 1;
	int j = 1;
	int low = 0;
	int left = 0;
	int up = 0;
	int up_left = 0;
	int center = 0;

	while (i != nbline) {
		while (j != nbcol) {
			center = tab[i][j];
			left = tab[i][j - 1];
			up = tab[i - 1][j];
			up_left = tab[i - 1][j - 1];
			low = nb_comp(center, left, up, up_left);
			tab[i][j] = tab[i][j] + low;
			j++;
		}
		j = 1;
		i++;
	}
}

co_t find_first_max(int ** tab, int nbline, int nbcol, co_t co)
{
	int i = 0;
	int j = 0;

	while (i < nbline) {
		while (j < nbcol) {
			if (co.max == tab[i][j]) {
				co.x = j;
				co.y = i;
				break;
			}
			j++;
		}
		if (co.max == tab[i][j])
			break;
		j = 0;
		i++;
	}
	return (co);
}

co_t find_max(int **tab, int nbline, int nbcol, co_t co)
{
	int i = 0;
	int j = 0;

	co.max = 0;
	while (i < nbline) {
		while (j < nbcol) {
			if (co.max <= tab[i][j]) {
				co.max = tab[i][j];
				co.x = j;
				co.y = i;
			}
			j++;
		}
		j = 0;
		i++;
	}
	co = find_first_max(tab, nbline, nbcol, co);
	return (co);
}
