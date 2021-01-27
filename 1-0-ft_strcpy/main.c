#include <stdio.h>

char 	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char src[] = "Try";
	char dest[3];

	printf("Resultado %s\n", ft_strcpy(dest, src));

	return (0);
}
