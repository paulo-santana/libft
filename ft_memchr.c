#include "libft.h"

void	*ft_memchr(const void *area, int chr, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)area;
	if (!area)
		return (NULL);
	
	i = 0;
	while (i < n)
		if (s[i++] == chr)
			return (void *)(s + i - 1);
	return (NULL);
}
