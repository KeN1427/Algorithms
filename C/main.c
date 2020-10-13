#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

int		main(void) {
	int a0, a1, tmp;

	/* user input numbers */
	printf("Type in the first integer: ");
	scanf("%d", &a0);
	printf("Type in the second integer: ");
	scanf("%d", &a1);
	printf("\n");

	/* check positive number */
	if (a0 <= 0 || a1 <= 0)	{
		printf("ERROR: Illegal input number.\n");
		exit(1);
	}
	/* normalize */
	if (a0 < a1) {
		tmp = a0;
		a0 = a1;
		a1 = tmp;
	}
	/* output gcd */
	printf("GCD(%d, %d) = %d\n", a0, a1, gcd(a0, a1));
	return (0);
}
