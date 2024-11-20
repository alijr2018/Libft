/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:39:28 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 18:16:42 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned char		*b;

	i = 0;
	if (n == 0)
		return (0);
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
