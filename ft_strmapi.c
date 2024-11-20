/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:25:56 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 17:46:42 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*rs;

	len = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	rs = (char *)malloc(len + 1);
	if (!rs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rs[i] = f(i, s[i]);
		i++;
	}
	rs[len] = '\0';
	return (rs);
}
