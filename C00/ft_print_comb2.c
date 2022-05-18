/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:40 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/08 20:13:05 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_numbers(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 100)
	{
		while (b < 100)
		{
			ft_numbers(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
