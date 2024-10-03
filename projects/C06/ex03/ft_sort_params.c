/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:37:24 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/25 13:46:06 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	ft_cmp(char *s1, char *s2)
{
	while (s1 == s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort(char **av, int ac)
{
	int	i;
	int	j;

	while (ac - 1)
	{
		i = 0;
		j = 0;
		while (j < ac)
		{
			if (ft_cmp(av[i], av[j]) > 0)
				ft_swap (&av[i], &av[j]);
			i++;
			j++;
		}
		ac--;
	}
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	ft_sort(av + 1, ac - 1);
	while (*(++av))
		ft_write(*av);
}
