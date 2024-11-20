/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:09:38 by abrami            #+#    #+#             */
/*   Updated: 2024/11/12 10:25:29 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_n;

	n_n = (t_list *)malloc(sizeof(t_list));
	if (!n_n)
		return (NULL);
	n_n->content = content;
	n_n->next = NULL;
	return (n_n);
}
