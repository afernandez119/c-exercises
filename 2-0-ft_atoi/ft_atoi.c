
int	ft_atoi(const char *str)
{
	long result;
	int neg;

	result = 0;
	neg = 1;

	if(*str == '+')
		str++;
	else if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result += (long) (*str - 48);
		str++;
		result *= 10;
	}
	return (result * neg / 10);
}
