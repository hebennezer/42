/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:33:59 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/25 11:48:17 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && i + 1 < size)
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/*
int	main(void)
{
	char	src[20] = "Hebennezer";
	char	dest[] = "1337 42 ";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}*/