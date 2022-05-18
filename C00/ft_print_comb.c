/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:45:10 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/08 18:36:57 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unity = ten + 1;
			while (unity <= '9')
			{
				write (1, &hundred, 1);
				write (1, &ten, 1);
				write (1, &unity, 1);
				if (hundred < '7')
					write (1, ", ", 1);
				unity ++;
			}
			ten ++;
		}
		hundred ++;
	}
}
