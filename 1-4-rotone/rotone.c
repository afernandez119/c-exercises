#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if ((*argv[1] >= 'a' && *argv[1] <= 'z') ||
				       	(*argv[1] >= 'A' && *argv[1] <= 'Z'))
			{
				if (*argv[1] == 'z')
					ft_putchar('a');
				else if (*argv[1] == 'Z')
					ft_putchar('A');
				else
					ft_putchar(*argv[1] + 1);
			}
			else
				ft_putchar(*argv[1]);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
