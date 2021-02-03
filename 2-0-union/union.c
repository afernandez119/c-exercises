#include <unistd.h>

int	ft_charinprev(char c, char *str, int i)
{
	i--;
	while (i >= 0)
	{
		if (c == str[i])
			return (1);
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	int t;

	i = 0;
	t = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_charinprev(av[1][i], av[1], i) == 0)
				write(1, av[1] + i, 1);
			i++;
		}
		while (av[2][t])
		{
			if (ft_charinprev(av[2][t], av[1], i) == 0 && 
					ft_charinprev(av[2][t], av[2], t) == 0 )
				write(1, av[2] + t, 1);
			t++;
		}
	
	}
	write(1, "\n", 1);
	return (0);
}
