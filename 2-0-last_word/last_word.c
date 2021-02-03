#include <unistd.h>

char	*ft_whitespaces(char *str, int *len)
{
	while (*str == ' ' || *str == '\t')
	{
		*str = '\0';
		*len-= 1;
		str--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int len;

	len = 0;
	if (argc == 2)
	{
		while (*argv[1])
		{
			len++;
			argv[1]++;
		}
		argv[1]--;
		argv[1] = ft_whitespaces(argv[1], &len);
		while((*argv[1] != ' ' && *argv[1] != '\t') && len >= 0)
		{
			argv[1]--;
			len--;
		}
		argv[1]++;
		while (*argv[1])
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
