/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:29:28 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/23 17:23:40 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d\n", ft_strcmp("Ola!", "Ola!2"));
	printf("%d\n", ft_strcmp("Ola", "Ol"));
	printf("%d\n", ft_strcmp("ol", "ola!"));
	printf("%d\n", ft_strcmp("ola!", "ola!"));
}*/