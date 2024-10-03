/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:28:23 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/08 19:31:54 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line(int len, char s, char m, char f)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (j == 0)
		{
			ft_putchar(s);
		}
		else if (j == len - 1)
		{
			ft_putchar(f);
		}
		else
		{
			ft_putchar(m);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			line(x, 'A', 'B', 'C');
		}
		else if (i == y - 1)
		{
			line(x, 'C', 'B', 'A');
		}
		else
		{
			line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
