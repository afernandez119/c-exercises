#include <unistd.h>

int	main(void)
{
	unsigned char letter;
	unsigned int j;

	letter = 'a';
	j = 0;
	while (j < 26)
	{
		write(1, &letter, 1);
		j++;
		letter++;
		if (j % 2 != 0)
			letter -= 32;
		else
			letter += 32;
	}
	write(1, "\n", 1);
	return (0);
}
