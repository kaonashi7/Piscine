/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:40:30 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:28 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n) && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0 || i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main()
{
	int res;
	char s1[] = "bwag";
	char s2[] = "bath";
	res = ft_strncmp(s1, s2, 4);

	printf("%d", res);

	return (0);
}*/
