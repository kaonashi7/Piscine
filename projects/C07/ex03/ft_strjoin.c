/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:48:01 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/25 19:23:27 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_all_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	if (size <= 0)
		total_len = 1;
	else
	{
		while (i < size)
		{
			total_len += ft_len(strs[i]);
			i++;
		}
		total_len += ft_len(sep) * (size - 1);
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*total;
	int		pos;
	int		arg;
	int		i;

	total = (char *) malloc (sizeof(char) * (ft_all_len(size, strs, sep) + 1));
	if (total == NULL)
		return (NULL);
	arg = 0;
	i = 0;
	while (arg < size)
	{
		pos = 0;
		while (strs[arg][pos])
			total[i++] = strs[arg][pos++];
		pos = 0;
		while (sep[pos] && arg != size - 1)
			total[i++] = sep[pos++];
		arg++;
	}
	total[i] = 0;
	return (total);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Heeey", "there", ", , , ,", "u cool", "??"};
	int	size = sizeof(strs) / sizeof(strs[0]);
	char	*sep = " ";
	int	i = 0;

	while (i < size)
	{
		printf("string[i = %d]: %s\n", i, strs[i]);
		i++;
	}
	printf("\nNew string: %s\n\n", ft_strjoin(size, strs, sep));
}*/
