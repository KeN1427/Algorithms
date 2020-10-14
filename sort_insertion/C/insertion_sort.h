#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

int		ascending(int, int);
int		descending(int, int);
void	int_insertion(int*, int, int (*f)(int, int));
void	str_insertion(char*, int (*f)(int, int));

#endif
