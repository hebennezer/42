/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:21:47 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/22 12:02:45 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	while (str[i] != '\0')
	{
		if (b == 0 && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			b++;
		}
		else if (b > 0 && (str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
				b = 0;
		else
			b++;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
}*/