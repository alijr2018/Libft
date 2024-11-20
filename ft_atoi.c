/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:59:59 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 09:36:48 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int s)
{
	if (s == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int				s;
	unsigned long	r;
	unsigned long	max;

	r = 0;
	s = 1;
	max = 9223372036854775807;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (r > (max - (*str - '0')) / 10)
			return (check(s));
		r = r * 10 + *str - '0';
		str++;
	}
	return ((unsigned int)r * s);
}
