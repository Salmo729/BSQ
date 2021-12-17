/*
** EPITECH PROJECT, 2018
** other_functions
** File description:
** make other things
*/

#include "my.h"

int n_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\n') {
		i++;
	}
	return (i);
}

char *spec_strdup(char *str)
{
	int i = n_strlen(str) + 1;
	int j = 0;
	int len = my_strlen(str);
	char *dest = malloc(sizeof(char) * len + 1);

	while (i < len) {
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
