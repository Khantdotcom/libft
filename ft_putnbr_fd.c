#include "libft.h"
#include <unistd.h>

static void	putnbr_long(long n, int fd)
{
	char	c;

	if (n >= 10)
		putnbr_long(n / 10, fd);
	c = (char)((n % 10) + '0');
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	putnbr_long(nbr, fd);
}