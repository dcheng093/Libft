/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:30:11 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/30 20:11:43 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isdelimiter(char c, char delimiter)
{
	return (c == delimiter);
}

static size_t	ft_count_words(char const *s, char delimiter)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (ft_isdelimiter(s[i], delimiter))
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && !ft_isdelimiter(s[i], delimiter))
				i++;
		}
	}
	return (count);
}

static char	*ft_get_word(char const *s, char d, size_t *i)
{
	size_t	start;

	start = *i;
	while (s[*i] && !ft_isdelimiter(s[*i], d))
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && ft_isdelimiter(s[i], c))
			i++;
		if (s[i])
			arr[j++] = ft_get_word(s, c, &i);
	}
	arr[j] = NULL;
	return (arr);
}
