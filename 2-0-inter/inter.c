#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isinstr(char *str, unsigned int *i)
{
	unsigned int t;

	t = 0;
	while(t < *i)
	{
		if (str[*i] == str[t])
			return (1);
		t++;	
	}
	return (0);
}

int	main(int argc, char **argv)
{
	unsigned int i;
	unsigned int t;
	unsigned int printed;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			t = 0;
			printed = 0;
			while (argv[2][t] && printed == 0)
			{
				if (ft_isinstr(argv[1], &i))
					printed = 1;
				else if (argv[1][i] == argv[2][t])
				{
					ft_putchar(argv[1][i]);
					printed = 1;				
				}
				t++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
