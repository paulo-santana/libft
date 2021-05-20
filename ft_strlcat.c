/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:38:39 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/20 16:38:39 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
	{
		if (i >= size)
			break ;
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if ((int)(size - i) > 1)
			dest[i] = src[j];
		i++;
		j++;
	}
	if (size > i)
		dest[i] = '\0';
	return (i);
}
