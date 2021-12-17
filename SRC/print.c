/*
** EPITECH PROJECT, 2018
** print map
** File description:
** print map of bsq
*/

#include "my.h"

void print_map(int **buffer, int nbline, int nbcol)
{
	int c = 0;
	int i = 0;

	while (i != nbline) {
		while (c != nbcol) {
			my_put_nbr(buffer[i][c]);
			c++;
		}
		c = 0;
		i++;
		my_putchar('\n');
	}
}

void print_db_str(char **db)
{
	int i = 0;

	while (db[i] != NULL) {
		my_putstr(db[i]);
		if (db[i + 1] != NULL)
			my_putchar('\n');
		i++;
	}
}
