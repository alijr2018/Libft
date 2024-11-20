/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:16:14 by abrami            #+#    #+#             */
/*   Updated: 2024/11/12 14:41:13 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_node;
	t_list	*n_lst;
	t_list	*current;

	n_lst = NULL;
	n_node = NULL;
	current = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		n_node = ft_lstnew(f(lst->content));
		if (!n_node)
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		if (!n_lst)
			n_lst = n_node;
		else
			current->next = n_node;
		current = n_node;
		lst = lst->next;
	}
	return (n_lst);
}
