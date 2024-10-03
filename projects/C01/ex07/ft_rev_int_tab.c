/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:22:39 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/09 18:32:18 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	swap;

	i = 0;
	tmp = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[tmp];
		tab[tmp] = swap;
		i++;
		tmp--;
	}
}
