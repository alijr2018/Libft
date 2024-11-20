/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:31:14 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 17:21:06 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischar(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	size_t		length;
	char		*t_str;

	if (!s1)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && ft_ischar(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_ischar(*end, set))
		end--;
	length = end - s1 + 1;
	t_str = (char *)malloc(length + 1);
	if (!t_str)
		return (NULL);
	ft_strlcpy(t_str, s1, length + 1);
	return (t_str);
}
