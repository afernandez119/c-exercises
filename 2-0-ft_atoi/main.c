#include <stdio.h>
int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Resultado de %s es %d\n", argv[1], ft_atoi(argv[1]));
		return (0);
	}
	printf("\n");
	return (0);
}
