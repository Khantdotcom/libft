#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	const unsigned char	*from;

	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	while (n--)
		*to++ = *from++;
	return (dst);
}