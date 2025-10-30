/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:34:22 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/30 18:08:05 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (n > dest_len)
		sum = dest_len + src_len;
	else
		return (src_len + n);
	while (src[i] && (dest_len + 1) < n)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (sum);
}

#include <stdio.h>

int	main(void)
{
	char 	dest[10] = "Hello";
	size_t	len = ft_strlcat(dest, "World", 8);
	printf("Result : %s\n", dest);
	printf("Returned : %zu\n", len);
}
