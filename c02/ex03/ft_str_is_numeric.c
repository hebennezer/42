/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:22:39 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/22 15:27:38 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_numeric("01948987493"));
	printf("%d\n", ft_str_is_numeric("0484882j8995489"));
	printf("%d\n", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}*/