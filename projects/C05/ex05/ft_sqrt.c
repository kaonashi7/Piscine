/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:11 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/18 20:10:32 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (i * i <= nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_sqrt(9));
	printf("\n");
}*/
