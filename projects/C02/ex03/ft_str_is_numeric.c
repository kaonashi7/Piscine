/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:02:39 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/12 14:22:28 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= 57) && (str[i] >= 48))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	t;
	char	a[] = " ";

	t = ft_str_is_numeric(a);
	printf("%d", t);
}*/
