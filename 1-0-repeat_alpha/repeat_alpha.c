#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int number;

	if (argc == 2)
	{
		while(*argv[1])
		{
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				number = *argv[1] - 96;
				while(number > 0)
				{
					write(1, argv[1], 1);
					number--;
				}
				argv[1]++;
			}
			else
			{
				write(1, argv[1], 1);
				argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
