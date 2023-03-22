/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase (copy).c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:39:52 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/21 16:22:32 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
int	main(void)
{
char str1[] = "HELLO";
char str2[] = "HELlO";
int result1 = ft_str_is_uppercase(str1);
int result2 = ft_str_is_uppercase(str2);
printf("Result 1: %d\n", result1); // Resultado esperado: 1
printf("Result 2: %d\n", result2); // Resultado esperado: 0
return 0;
}