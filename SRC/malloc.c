/*
** EPITECH PROJECT, 2018
** malloc
** File description:
** malloc tab and str for bsq
*/

#include "my.h"

int **my_malloc_int(int nblines, int nbcols)
{
	int i = 0;
	int **tab = NULL;

	tab = malloc(sizeof(int *) * (nblines + 1));

	while (i != nblines) {
		tab[i] = malloc(sizeof(int) * (nbcols));
		i++;
	}
	return (tab);
}

char **my_malloc_str(int nbline, int nbcols)
{
	int i = 0;
	char **db = NULL;

	db = malloc(sizeof(char *) * (nbline));

	while (i != nbline) {
		db[i] = malloc(sizeof(char) * (nbcols));
		i++;
	}
	db[i] = NULL;
	return (db);
}
