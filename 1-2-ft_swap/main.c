#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 10;

	printf("Sin modificar a = %d y b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Intercambiados a = %d y b = %d\n", a, b);
	return (0);
}
