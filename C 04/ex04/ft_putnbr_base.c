/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:50:57 by terussar          #+#    #+#             */
/*   Updated: 2022/07/19 12:16:03 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	negative(int *nbr)
{
	if (*nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		*nbr = 147483648;
	}
	if (*nbr < 0)
	{
		ft_putchar('-');
		*nbr = -1 * *nbr;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_strlen(base);
	if (size > 1 && ft_checkbase(base) == 1)
	{
		if (nbr < 0)
			negative(&nbr);
		if (nbr >= size)
		{
			ft_putnbr_base((nbr / size), base);
			ft_putchar(base[nbr % size]);
		}
		else
			ft_putchar(base[nbr % size]);
	}
}
