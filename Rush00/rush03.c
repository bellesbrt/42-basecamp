/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:10:28 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/06 19:17:42 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cx;
	int	ly;

	ly = 0;
	while (ly < y)
	{
		cx = 0;
		while (cx < x)
		{
			if ((ly == 0 && cx == 0) || (ly == y - 1 && cx == 0))
				ft_putchar('A');
			else if ((ly == 0 && cx == x - 1) || (ly == y - 1 && cx == x - 1))
				ft_putchar('C');
			else if (ly == 0 || ly == y - 1 || cx == 0 || cx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		ly++;
	}
}
