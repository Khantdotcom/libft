#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last;

	if (!f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = f(lst);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_node;
		else
		{
			last = ft_lstlast(new_list);
			last->next = new_node;
		}
		lst = lst->next;
	}
	return (new_list);
}