#include "../libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = (unsigned char)c;
	return (dest);
}
