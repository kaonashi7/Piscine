/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:46 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/19 15:11:32 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_power(2,3));
	printf("\n");
	printf("%d", ft_recursive_power(0,0));
	printf("\n");
	printf("%d", ft_recursive_power(4,0));
	printf("\n");
}*/
