/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:38:14 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/25 19:22:44 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	array = (int *) malloc (sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	if (array != 0)
	{
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	
	min = -1;
	max = 1;
	printf("The range is: %d\n", ft_ultimate_range(&range, min, max));
}*/
