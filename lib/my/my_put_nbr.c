/*
** EPITECH PROJECT, 2017
** my_put_nb
** File description:
** put nbr
*/

#include "my.h"

void my_put_nbr(int nb)
{
	int	backup = nb;
	int	divided = 1;
	int	blah = 0;

	if (nb < 0)
		my_putchar('-');
	while (backup >= 10) {
		divided = divided * 10;
		backup = backup / 10;
	}
	while (divided != 0) {
		blah = nb / divided;
		blah += 48;
		my_putchar((char)blah);
		nb = nb % divided;
		divided = divided / 10;
	}
}
