/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:05:13 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 17:42:39 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;

	if (dst == src || len == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		return (ft_memcpy(d, s, len));
	}
	return (dst);
}
