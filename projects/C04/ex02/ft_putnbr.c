/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:43:52 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/18 12:49:50 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	a = nb % 10 + '0';
	write (1, &a, 1);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr (12345);
	printf("\n");
	ft_putnbr (-2147483648);
	printf("\n");
	ft_putnbr (0);
	printf("\n");
	ft_putnbr (-12345);
	return (0);

}*/
