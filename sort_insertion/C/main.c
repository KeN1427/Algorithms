#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "insertion_sort.h"

void	errmsg_and_exit(void);

int		main(int argc, char **argv) {

	if (argc != 4)
		errmsg_and_exit();

	int		i;
	char	*type = argv[1];
	int		flag = atoi(argv[2]);
	int		size = 0;

	if (!(flag == 0 || flag == 1))
		errmsg_and_exit();

	puts("===== insertoin sorting =====");
	
	if (strcmp(type, "int") == 0) {
		size = atoi(argv[3]);
		
		if (size < 1)
			errmsg_and_exit();
		
		int tab[size];
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
		for (i = 0; i < size; i++)
			printf("%d ", tab[i]);
		printf("}\n");
	}
	else if (strcmp(type, "string") == 0) {
		printf("before: string = %s\n", argv[3]);
		
		if (flag)
			str_insertion(argv[3], descending);
		else
			str_insertion(argv[3], ascending);
	
		printf("after : string = %s\n", argv[3]);
	}
	else
		errmsg_and_exit();

	puts("=============================");
	
	return 0;
}

void	errmsg_and_exit(void) {
	puts("ERROR: Invalid arguments.");
	puts("first argument : the type of array ('int' or 'string')");
	puts("second argument: ascending('0') or descending('1')");
	puts("third argument : [int] tab size (bigger than 1) / [string] string before sorting");
	exit(1);
}
