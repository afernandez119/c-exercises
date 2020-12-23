#include <unistd.h>

int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoP", 16);
	write(1, "qRsTuVwXyZ\n", 11);
	return (0);
}
