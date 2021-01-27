int ft_strlen(char *str)
{
	unsigned int result;

	result = 0;
	while(*str)
	{
		result++;
		str++;
	}
	return (result);
}
