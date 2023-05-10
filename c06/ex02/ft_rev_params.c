/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:29:20 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/30 21:14:49 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = argc - 1;
	if (argc > 1)
	{	
		while (n > 0)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				write (1, &argv[n][i], 1);
				i++;
			}
			write (1, "\n", 1);
			n--;
			if (argc == 0)
				return (0);
		}
	}
	return (0);
}
