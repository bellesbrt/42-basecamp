/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:59:41 by inicole-          #+#    #+#             */
/*   Updated: 2022/02/18 23:09:54 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		i;
	int		swap;
	char	*aux;

	i = 1;
	while (1)
	{
		i = 1;
		swap = 0;
		while (i < size)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				aux = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = aux;
				swap = 1;
			}
			i++;
		}
		if (!swap)
			break ;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		ft_sort_str_tab(argv, (argc - 1));
		i = 0;
		while (i++ < argc - 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
}
