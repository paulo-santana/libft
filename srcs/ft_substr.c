/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:28:27 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/22 22:28:27 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	max_size;

	s_len = ft_strlen((char *)s);
	if (start < s_len)
		max_size = s_len - start;
	else
		max_size = 0;
	if (max_size > len)
		max_size = len;
	sub = malloc(sizeof(char) * (max_size + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, max_size + 1);
	return (sub);
}
