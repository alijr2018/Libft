/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:18:16 by abrami            #+#    #+#             */
/*   Updated: 2024/11/15 15:35:10 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cu;

	if (!lst || !new || !*lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		cu = *lst;
		while (cu->next != NULL)
		{
			cu = cu->next;
		}
		cu->next = new;
	}
}
