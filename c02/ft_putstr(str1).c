/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr(str1).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:43:14 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/19 12:59:38 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace_first_h_with_y(char *str)
{
	str[0] = 'y';
	str[2] = 'c';
}

int	main(void)
{
	char	str1[] = "hello";
	
	ft_putstr(str1);
	ft_putchar('\n');
	replace_first_h_with_y(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}