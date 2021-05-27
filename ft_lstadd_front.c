#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *second;

	second = *lst;
	new->next = second;
	*lst = new;
}
