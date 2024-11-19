/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:08:09 by hvercell          #+#    #+#             */
/*   Updated: 2022/07/10 12:03:19 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushlig(int y)
{
	int	j;

	j = 0;
	while (++j <= y)
	{
		if (j == 1)
			ft_putchar('/');
		else if (j == y)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	rushcol(int x)
{
	int	i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		ft_putchar('\n');
	}
}

void	rushelse(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar ('\\');
			else if ((i == 1 && j == 1) || (i == y && j == x))
				ft_putchar ('/');
			else if ((i == 1 && j != 1) || (i == y && j != x))
				ft_putchar ('*');
			else if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
				ft_putchar ('*');
			else
				ft_putchar (' ');
		}
		ft_putchar ('\n');
	}
}

void	rush(int x, int y)
{
	if (y == 1)
		rushlig(x);
	else if (x == 1)
		rushcol(y);
	else
		rushelse(x, y);
}
