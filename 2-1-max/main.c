#include <stdio.h>

int	max(int* tab, unsigned int len);

int	main(void)
{
	int v[3] = {35,23,24};
	printf("Resultado max: %d\n", max(v, 3));
	return (0);
}
