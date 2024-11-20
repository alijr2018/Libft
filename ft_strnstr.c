/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:30:04 by abrami            #+#    #+#             */
/*   Updated: 2024/11/17 11:13:02 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ln;

	ln = ft_strlen(needle);
	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0' || !needle)
		return ((char *)haystack);
	while (*haystack != '\0' && len-- >= ln)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, ln) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
