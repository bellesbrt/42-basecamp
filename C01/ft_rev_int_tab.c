/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:58:49 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/11 13:18:32 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		x = tab[i];
		tab[i] = tab[size];
		tab[size] = x;
		i++;
		size--;
	}
}
