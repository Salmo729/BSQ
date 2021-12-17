/*
** EPITECH PROJECT, 2018
** bsq
** File description:
**
*/

#include "my.h"

char *get_map(char *av)
{
	struct stat info;
	int fd = open(av, O_RDONLY);

	stat(av, &info);
	char *map = malloc(sizeof(char) * (info.st_size + 1));

	read(fd, map, info.st_size);
	map[info.st_size] = '\0';
	return (map);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (84);

	co_t co;
	char *map = get_map(av[1]);
	int nbline = my_getnbr(map);
	char *mapint = let_to_num(map);
	int nbcol = n_strlen(mapint);
	int **tabint = str_to_tabint(mapint, nbline, nbcol);
	char **map2d = str_to_db(map, nbline, nbcol);

	algo(tabint, nbline, nbcol);
	co = find_max(tabint, nbline, nbcol, co);
	put_square(map2d, co);
	print_db_str(map2d);
}
