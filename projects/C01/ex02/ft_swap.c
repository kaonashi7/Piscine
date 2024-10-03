/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:41:38 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/09 15:47:54 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 4;
	b = 6;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a: %d, b: %d \n", a, b);
}*/
