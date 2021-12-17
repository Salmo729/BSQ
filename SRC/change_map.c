/*
** EPITECH PROJECT, 2018
** change_map
** File description:
** modifie bsq map
*/

#include "my.h"

char *let_to_num(char *str)
{
	char *buff = spec_strdup(str);

	for (int i = 0; buff[i] != '\0'; i++) {
		if (buff[i] == '.')
			buff[i] = '1';
		else if (buff[i] != '\n')
			buff[i] = '0';
	}
	return (buff);
}

int **str_to_tabint(char *str, int nbline, int nbcol)
{
	int i = 0;
	int k = 0;
	int l = 0;
	int **tab = malloc(sizeof(int *) * (nbline + 1));

	while (k != nbline) {
		tab[k] = malloc(sizeof(int) * nbcol);
		while (str[i] != '\n') {
			tab[k][l] = str[i] - 48;
			i++;
			l++;
		}
		k++;
		i++;
		l = 0;
	}
	tab[k] = NULL;
	return (tab);
}

char **str_to_db(char *str, int nbline, int nbcol)
{
	char **db = malloc(sizeof(char *) * (nbline + 1));
	int line = 0;
	int i = n_strlen(str) + 1;
	int j = 0;
	int k = 0;

	db[k] = NULL;
	db[line] = malloc(sizeof(char) * (nbcol + 1));

	while (str[i] != '\0') {
		if (str[i] == '\n' && str[i + 1] != '\0') {
			db[line][j] = '\0';
			++line;
			++i;
			db[line] = malloc(sizeof(char) * (nbcol + 1));
			j = 0;
		}
		db[line][j] = str[i];
		++j;
		++i;
	}
	db[line][j + 1] = '\0';
	db[line + 1] = NULL;
	return (db);
}

void put_square(char **str, co_t co)
{
	int m1 = co.max;
	int m2 = co.max;
	int ab = co.y;
	int or = co.x;

	while (m1 != 0) {
		while (m2 != 0) {
			str[ab][or] = 'x';
			or--;
			m2--;
		}
		or = co.x;
		m2 = co.max;
		ab--;
		m1--;
	}
}
