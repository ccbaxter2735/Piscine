/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:44:24 by terussar          #+#    #+#             */
/*   Updated: 2022/07/18 12:34:36 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char i)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	ft_putchar(base_hexa[i / 16]);
	ft_putchar(base_hexa[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i = i + 1;
	}
}
