/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:13:52 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/22 12:46:55 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[b] != '\0' && b < (size - 1))
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (i);
}

int	main()
{
	char	src[] = "World!";
	char	dest[] = "Hello ";
	printf("%d | %s\n", ft_strlcpy(dest, src, 10), dest);
}
