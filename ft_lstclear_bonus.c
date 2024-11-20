/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:54:56 by abrami            #+#    #+#             */
/*   Updated: 2024/11/05 10:42:21 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cu;
	t_list	*n_no;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	cu = *lst;
	while (cu != NULL)
	{
		n_no = cu->next;
		del(cu->content);
		free(cu);
		cu = n_no;
	}
	*lst = NULL;
}
