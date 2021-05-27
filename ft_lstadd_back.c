/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:24:15 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/27 14:24:15 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define TEST_FAILED 1
#define TEST_SUCCESS 0

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}

int	main(void)
{
	t_list	*l;
	t_list	*n;

	l = ((void *)0);
	n = ft_lstnew(ft_strdup("OK"));
	ft_lstadd_back(&l, n);
	if (l == n && !strcmp(l->content, "OK"))
	{
		free(l->next);
		free(l);
		exit(TEST_SUCCESS);
	}
	free(l->next);
	free(l);
	exit(TEST_FAILED);
}
