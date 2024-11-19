/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:08:09 by hvercell          #+#    #+#             */
/*   Updated: 2022/07/10 11:44:07 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				ft_putchar ('A');
			else if ((i == y && j == x) || (i == y && j == 1))
				ft_putchar ('C');
			else if ((i == 1 && j != 1) || (i == y && j != x))
				ft_putchar ('B');
			else if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
				ft_putchar ('B');
			else
				ft_putchar (' ');
		}
		ft_putchar ('\n');
	}
}
