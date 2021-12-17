/*
** EPITECH PROJECT, 2017
** prototypes
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#define READ_SIZE 1

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct s_coor
{
	int x;
	int y;
	int max;
} co_t;

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char const *str);
int cti(char c);
int my_getnbr(char const *str);
void my_put_nbr(int nb);
int **my_malloc_int(int nblines, int nbcols);
char **my_malloc_str(int nbline, int nbcols);
void print_map(int **buffer, int nbline, int nbcol);
void print_db_str(char **db);
char *let_to_num(char *str);
int **str_to_tabint(char *str, int nbline, int nbcol);
char **str_to_db(char *str, int nbline, int nbcol);
void put_square(char **str, co_t co);
char *spec_strdup(char *str);
int n_strlen(char *str);
int nb_comp(int center, int left, int up, int up_left);
void algo(int **tab, int nbline, int nbcol);
co_t find_first_max(int ** tab, int nbline, int nbcol, co_t co);
co_t find_max(int **tab, int nbline, int nbcol, co_t co);
char *get_map(char *av);

#endif
