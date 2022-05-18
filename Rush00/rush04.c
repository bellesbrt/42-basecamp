/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:39:04 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/06 18:58:13 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up(int col, int col2)
{
	if (col == 0)
		ft_putchar('A');
	else if (col == col2)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	mid(int col, int col2)
{
	if ((col == 0 || col == col2))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	under(int col, int col2)
{
	if (col == 0)
		ft_putchar('C');
	else if (col == col2)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	cx;
	int	ly;

	ly = 0;
	if (x >= 1 && y >= 1)
	{
		while (ly < y)
		{
			cx = 0;
			while (cx < x)
			{
				if (ly == 0)
					up (cx, x - 1);
				else if (ly == y - 1)
					under (cx, x - 1);
				else
					mid (cx, x - 1);
				cx++;
			}
			ft_putchar('\n');
			ly++;
		}
	}
}
