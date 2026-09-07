#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	i;

	start = 0;
	end = ft_strlen(s);
	while (s[start] && is_space(s[start]))
		start++;
	while (end > start && is_space(s[end - 1]))
		end--;
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s[start++];
	trimmed[i] = '\0';
	return (trimmed);
}