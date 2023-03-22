/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:47:18 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/21 12:24:26 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '0';
	return (dest);
}
/*
int main(void)
{
	char	source[] = "source string.";
	char	destin[] = "destination string.";
	char	*dest;

	printf("antes\n\tsrc: %s\n\tdes: %s\n,", source, destin);
	
	dest = ft_strcpy(destin, source);
	
	printf("depois\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}*/
