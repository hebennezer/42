/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:02:04 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/22 16:06:17 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_lowercase("abcdefghijkl"));
	printf("%d\n", ft_str_is_lowercase("abcAdefghijkl"));
	printf("%d\n", ft_str_is_lowercase("-_134556efSghij67"));
}