/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
	int i = 0;
	int c = 0;

	while (str[i] < '0' || str[i] > '9') {
		i++;
	}

	while (str[i]  >= '0' && str[i] <= '9') {
		c = c + cti(str[i]);
		c = c * 10;
		i ++;
	}
	c /= 10;
	if (str[0] == '-')
		c = c * -1;
	return (c);
}
