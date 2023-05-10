/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalves- <ebalves-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:30:13 by ebalves-          #+#    #+#             */
/*   Updated: 2023/03/30 19:37:11 by ebalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	should_display(int *digits, int n)
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n)
	{
		if (digits[i - 1] >= digits[i])
		{
			display = 0;
		}
	}
	return (display);
}

void	print(int *digits, int n)
{
	int	i;

	if (!should_display(digits, n))
	{
		return ;
	}
	i = -1;
	while (++i < n)
	{
		ft_putchar(digits[i] + 48);
	}
	if (digits[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	init_digits(int *digits, int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		digits[i] = i;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	digits[10];

	if (0 > n || 10 <= n)
	{
		return ;
	}
	init_digits(digits, n);
	while (digits[0] <= (10 - n))
	{
		print(digits, n);
		digits[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (digits[i] > 9)
			{
				digits[i - 1]++;
				digits[i] = 0;
			}
		}
	}
}
/*
#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	int n;

	n = 2;
	while(n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}*/