#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'A' && *av[1] <= 'Z')
				ft_putchar(155 - *av[1]);
			else if (*av[1] >= 'a' && *av[1] <= 'z')
				ft_putchar(219 - *av[1]);
			else
				ft_putchar(*av[1]);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
