int	max(int* tab, unsigned int len)
{
	int max_number;
	unsigned int i;

	if (!len)
		return (0);
	i = 0;
	max_number = tab[0];
	while (++i < len)
	{
		if (max_number < tab[i])
			max_number = tab[i];
	}
	return (max_number);
}
