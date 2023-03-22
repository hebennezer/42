/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:26:15 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/22 15:19:31 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "souce string";
	char	dest[] = "destination string";
	unsigned int n;

	n = 2;

	printf("antes\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("despois\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}*/