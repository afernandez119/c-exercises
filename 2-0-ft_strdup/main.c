#include <stdio.h>
#include <stdlib.h>

char	*strdup(const char *s);
char    *ft_strdup(const char *s);

int main(int argc, char **argv)
{
	char *result1;
	char *result2;

	if (argc == 2)
	{
		result1 = strdup(argv[1]);
		result2 = ft_strdup(argv[1]);
		printf("Resultado de enviar %s a strdup es: %s\n", argv[1], result1);
		printf("Resultado de enviar %s a ft_strdup es: %s\n", argv[1], result2);
		free(result1);
		free(result2);	
		return (0);
	}
	printf("\n");
	return (0);
}
