#include <unistd.h>

int	ft_strlen(char *a)
{
	unsigned int len_char;

	len_char = 0;

	while(*a)
	{
		len_char++;
		a++;
	}
	return (len_char);
}

int	ft_isletter(char *a)
{
	unsigned int isletter;

	isletter = 0;

	if ((*a >= 'a' && *a <= 'z') || (*a >= 'A' && *a <= 'Z'))
		isletter = 1;

	return (isletter);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
			;
		else if (ft_isletter(argv[2]) != 1 && ft_isletter(argv[3]) != 1)
			;
		else
		{
			while(*argv[1])
			{
				if(*argv[1] == *argv[2])
					write(1, argv[3], 1);
				else
					write(1, argv[1], 1);
				argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
