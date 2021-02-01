#include <stdlib.h>

void	*malloc(size_t size);

char	*ft_strdup(char *src)
{
	char *result;
	unsigned int i;
	unsigned int t;

	i = 0;
	t = 0;
	while(src[i])
		i++;
	result = malloc(sizeof(char) * ++i);
	if (result == NULL)
		return NULL;
	else
	{
		while(i)
		{
			result[t] = src[t];
			t++;
			i--;
		}
	}
	return (result);
}
