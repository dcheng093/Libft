/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:51:40 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/28 19:59:24 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void ft_upper_wrapper(unsigned int i, char *c)
// {
//     (void)i;
// 	*c = ft_toupper(*c);
// }

// int main(void)
// {
//     char str[] = "hello World!";
//     ft_striteri(str, ft_upper_wrapper);
//     printf("%s\n", str);
//     return 0;
// }
