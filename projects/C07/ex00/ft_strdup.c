/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkokojka <gkokojka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:09:29 by gkokojka          #+#    #+#             */
/*   Updated: 2024/09/25 19:21:53 by gkokojka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *src)
{
	int	c;

	c = 0;
	while (*src)
	{
		c++;
		src++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(sizeof(char) * (ft_len(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	//char *src = "";
	char *src = "Hello ? U there?";

	printf("\nSource string is: %s\n", src);
	printf("Destination string is: %s\n\n", ft_strdup(src));
	return (0);
}*/
