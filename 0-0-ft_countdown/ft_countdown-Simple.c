#include <unistd.h>

int	main(void)
{
	write(1, "9876543210\n", 11); //11 bytes, cada char ocupa 1 byte
	return (0);
}
