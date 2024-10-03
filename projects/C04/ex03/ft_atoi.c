/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:30:18 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/18 12:53:21 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	short	neg;
	int		number;
	int		i;

	neg = 0;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (neg % 2 == 1)
		return (number * -1);
	return (number);
}
/*
int	main()
{
	char	str1[] = " 	   ---+--+1234ab567";
	printf("%d\n", ft_atoi(str1));
	char    str2[] = "          --++1234ab567";
	printf("%d\n", ft_atoi(str2));
	char    str3[] = "          ---+-+1234ab567";
	printf("%d\n", ft_atoi(str3));
	char    str4[] = "          ---++1234ab567";
	printf("%d\n", ft_atoi(str4));
	char    str5[] = "          ---+--+ab567";
	printf("%d\n", ft_atoi(str5));
}*/
