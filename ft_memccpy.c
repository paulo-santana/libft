/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:50:24 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/18 21:50:24 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char				*c_pos;
	size_t				i;

	c_pos = ft_memchr(src, c, n);
	if (c_pos)
	{
		i = c_pos - (char *)src + 1;
		ft_memmove(dest, src, i);
		return ((char *)dest + i);
	}
	else
	{
		ft_memmove(dest, src, n);
		return (NULL);
	}
}
