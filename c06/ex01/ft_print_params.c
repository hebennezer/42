/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:29:17 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/30 21:14:39 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (argc > 0)
	{	
		while (n < argc)
		{
			i = 0;
			while (argv[n][i])
			{
				write (1, &argv[n][i], 1);
				i++;
			}
			write (1, "\n", 1);
			n++;
		}
	}
	return (0);
}
