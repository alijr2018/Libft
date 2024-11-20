/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <abrami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:37:48 by abrami            #+#    #+#             */
/*   Updated: 2024/11/18 18:23:37 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nbr(unsigned int nb, int fd)
{
	char		arr[10];
	int			i;

	i = 0;
	while (nb)
	{
		arr[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
		write(fd, &arr[--i], 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	r;
	char			nbr;

	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		r = nb * -1;
	}
	else
		r = nb;
	if (r < 10)
	{
		nbr = r + '0';
		write(fd, &nbr, 1);
	}
	else
	{
		print_nbr(r, fd);
	}
}
