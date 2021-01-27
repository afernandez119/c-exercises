#include <stdio.h>

int	ft_strlen(char *src);

int	main(void)
{
	char name[] = "Cinco";
	
	printf("La longitud de %s es de %d\n", name, ft_strlen(name));
	return (0);
}
