#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_split(char **split, size_t words)
{
	while (words > 0)
	{
		free(split[words - 1]);
		words--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word;
	size_t	start;
	size_t	i;

	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		split[word] = ft_substr(s, (unsigned int)start, i - start);
		if (!split[word])
		{
			free_split(split, word);
			return (NULL);
		}
		word++;
	}
	split[word] = NULL;
	return (split);
}