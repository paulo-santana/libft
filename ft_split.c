/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:46:30 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/23 12:46:30 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_next_word(char const *s, char c)
{
	char	*word;
	size_t	limit;

	(void)word;
	limit = 0;
	while (s[limit] && s[limit] != c)
		limit++;
	word = ft_substr(s, 0, limit);
	return (word);
}

static void	*free_result(char **result, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(result[i]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	pieces;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	pieces = 1;
	while (s[i])
		if (s[i++] == c)
			pieces++;
	result = malloc(sizeof(char *) * (pieces + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < pieces)
	{
		result[i] = get_next_word(s, c);
		if (!result[i])
			return (free_result(result, i));
		if (++i < pieces)
			s = ft_strchr(s + 1, c) + 1;
	}
	result[pieces] = NULL;
	return (result);
}
