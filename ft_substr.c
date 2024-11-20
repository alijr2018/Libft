/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:31:07 by abrami            #+#    #+#             */
/*   Updated: 2024/11/01 12:04:07 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	substr_len;
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	substr_len = len;
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		substr_len = s_len - start;
	substr = malloc(substr_len + 1);
	if (!substr)
		return (NULL);
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[substr_len] = '\0';
	return (substr);
}
