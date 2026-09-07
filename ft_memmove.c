#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	const unsigned char	*from;

	if (dst == src || len == 0)
		return (dst);
	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	if (to < from)
		return (ft_memcpy(dst, src, len));
	while (len--)
		to[len] = from[len];
	return (dst);
}