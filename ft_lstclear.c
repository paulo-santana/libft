/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <psergio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:08:40 by psergio-          #+#    #+#             */
/*   Updated: 2021/05/27 16:08:40 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lsttmp;

	if (!lst)
		return ;
	lsttmp = *lst;
	while (*lst)
	{
		ft_lstdelone(lsttmp, del);
		free(lsttmp);
		lsttmp = (*lst)->next;
		*lst = lsttmp;
	}
	*lst = NULL;
}
