#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while(*argv[1])
		{
			if (*argv[1] == ' ' || *argv[1] == '\t')
				argv[1]++;
			else
			{
				write(1, argv[1], 1);
				argv[1]++;
				if (*argv[1] == ' ' || 
						*argv[1] == '\t' || 
						*argv[1] == '\0')
				{
					write(1, "\n", 1);
					return (0);
				}
			}	
		}
	}
	write(1, "\n", 1);
	return (0);
}
