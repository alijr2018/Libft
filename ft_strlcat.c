/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:24:19 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 10:14:14 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	dl = ft_strlen(dst);
	if (dl >= dstsize)
		return (sl + dstsize);
	while (src[i] != '\0' && i < dstsize - dl - 1)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
