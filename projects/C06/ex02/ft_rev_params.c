/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:08:56 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/21 19:37:16 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j != 0)
	{
		i = 0;
		while (argv[j][i])
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j--;
	}
}
