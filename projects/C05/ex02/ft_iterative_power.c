/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:38:38 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/18 20:09:43 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		j *= nb;
		i++;
	}
	return (j);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_iterative_power(0,0));
	printf("\n");
        printf("%d", ft_iterative_power(1,-2));
	printf("\n");
        printf("%d", ft_iterative_power(1,1));
	printf("\n");
        printf("%d", ft_iterative_power(2,3));
	printf("\n");
	printf("%d", ft_iterative_power(0,2));
	printf("\n");
}*/
