/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 07:23:53 by dcheng            #+#    #+#             */
/*   Updated: 2025/09/19 07:23:53 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = (unsigned char) c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char buffer[10];

// 	ft_memset(buffer, 0, sizeof(buffer));
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", buffer[i]); // should print 0 0 0 0 0 0 0 0 0 0
// 	printf("\n");
// }
