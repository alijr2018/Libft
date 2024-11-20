/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:49:34 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 18:14:55 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	if (count != 0 && (len / count) != size)
		return (NULL);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, len);
	return (ptr);
}
