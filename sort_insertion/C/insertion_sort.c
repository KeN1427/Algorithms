#include "insertion_sort.h"

int		ascending(int a, int b) {
	if (a > b)
		return 1;
	else
		return 0;
}

int		descending(int a, int b) {
	if (a < b)
		return 1;
	else
		return 0;
}

void	int_insertion(int *tab, int length, int (*f)(int, int)) {
	int		i, j, key;

	for(i = 1; i < length; i++) {
		key = tab[i];
		j = i - 1;
		while (j >= 0 && f(tab[j], key)) {
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
	}
}

void	str_insertion(char *src, int (*f)(int, int)) {
	int		i, j;
	char	key;

	i = 1;
	while(src[i]) {
		key = src[i];
		j = i - 1;
		while (j >= 0 && f((int)src[j], (int)key)) {
			src[j + 1] = src[j];
			j--;
		}
		src[j + 1] = key;
		i++;
	}
}
