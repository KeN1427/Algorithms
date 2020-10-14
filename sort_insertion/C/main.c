#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "insertion_sort.h"

void	errmsg_and_exit(void);

int		main(int argc, char **argv) {
	if (argc != 3)
		errmsg_and_exit();

	int i;
	int	flag = atoi(argv[1]);
	int size = atoi(argv[2]);
	int tab[size];
	
	if (!(flag == 0 || flag == 1) || size < 1)
		errmsg_and_exit();

	srand((unsigned)time(NULL));
	printf("bofore: tab = { ");
	for (i = 0; i < size; i++) {
		tab[i] = rand() % size + 1;
		printf("%d ", tab[i]);
	}
	printf("}\n");

	if (flag)
		int_insertion(tab, size, descending);
	else
		int_insertion(tab, size, ascending);
	
	printf("after : tab = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", tab[i]);
	}
	printf("}\n");
	return 0;
}

void	errmsg_and_exit(void) {
	puts("ERROR: Invalid arguments.");
	puts("first argument : ascending(0) or descending(1)");
	puts("second argument: tab size (bigger than 1)");
	exit(1);
}
