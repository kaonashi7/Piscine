/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:02 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/25 19:22:13 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*p;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	p = (int *) malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min - max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>

int	main()
{
	int	min;
	int	max;
	int	i;
	int	*array;

	min = -5;
	max = 10;
	i = 0;
	array = ft_range(min, max);
	while (i < max - min)
	{
		if (i == ((max - min) - 1))
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
}*/
