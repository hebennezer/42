/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:09:53 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/27 16:20:44 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
	{
		nb = 1 / nb;
		power = -power;
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(-2, 4));
	printf("%d\n", ft_recursive_power(-2, 3));
}
